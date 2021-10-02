//
// Generated by Bluespec Compiler, version 2021.07-3-g8227dc97 (build 8227dc97)
//
// On Sat Oct  2 15:35:55 +0530 2021
//
//
// Ports:
// Name                         I/O  size props
// RDY_common_ma_update_eEpoch    O     1 const
// RDY_common_ma_update_wEpoch    O     1 const
// RDY_common_ma_flush            O     1
// RDY_common_ma_reset_done       O     1 const
// icache_to_icache_get           O    68
// RDY_icache_to_icache_get       O     1
// tx_tx_to_stage1_enq_ena        O     1
// tx_tx_to_stage1_enq_data       O    77
// RDY_s0_bpu_ma_train_bpu        O     1
// RDY_s0_bpu_ma_mispredict       O     1
// RDY_s0_bpu_ma_bpu_enable       O     1 const
// resetpc                        I    64
// CLK                            I     1 clock
// RST_N                          I     1 reset
// common_ma_flush_fl             I    66
// common_ma_reset_done__done     I     1
// tx_tx_to_stage1_notFull_b      I     1
// tx_tx_to_stage1_enq_rdy_b      I     1
// s0_bpu_ma_train_bpu_td         I   142
// s0_bpu_ma_mispredict_g         I     9
// s0_bpu_ma_bpu_enable_e         I     1
// EN_common_ma_update_eEpoch     I     1
// EN_common_ma_update_wEpoch     I     1
// EN_common_ma_flush             I     1
// EN_common_ma_reset_done        I     1
// EN_s0_bpu_ma_train_bpu         I     1
// EN_s0_bpu_ma_mispredict        I     1
// EN_s0_bpu_ma_bpu_enable        I     1
// EN_icache_to_icache_get        I     1
//
// Combinational paths from inputs to outputs:
//   (common_ma_reset_done__done, EN_common_ma_reset_done) -> RDY_common_ma_flush
//   (common_ma_reset_done__done,
//    tx_tx_to_stage1_notFull_b,
//    tx_tx_to_stage1_enq_rdy_b,
//    EN_common_ma_reset_done,
//    EN_s0_bpu_ma_bpu_enable) -> RDY_icache_to_icache_get
//   (common_ma_reset_done__done,
//    tx_tx_to_stage1_notFull_b,
//    tx_tx_to_stage1_enq_rdy_b,
//    EN_common_ma_reset_done,
//    EN_s0_bpu_ma_bpu_enable) -> tx_tx_to_stage1_enq_ena
//   (common_ma_reset_done__done,
//    tx_tx_to_stage1_notFull_b,
//    tx_tx_to_stage1_enq_rdy_b,
//    s0_bpu_ma_bpu_enable_e,
//    EN_common_ma_reset_done,
//    EN_s0_bpu_ma_bpu_enable) -> tx_tx_to_stage1_enq_data
//   (common_ma_reset_done__done,
//    tx_tx_to_stage1_notFull_b,
//    tx_tx_to_stage1_enq_rdy_b,
//    EN_common_ma_reset_done,
//    EN_s0_bpu_ma_bpu_enable) -> icache_to_icache_get
//   (s0_bpu_ma_bpu_enable_e, EN_s0_bpu_ma_bpu_enable) -> RDY_s0_bpu_ma_train_bpu
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

module mkstage0(resetpc,
		CLK,
		RST_N,

		EN_common_ma_update_eEpoch,
		RDY_common_ma_update_eEpoch,

		EN_common_ma_update_wEpoch,
		RDY_common_ma_update_wEpoch,

		common_ma_flush_fl,
		EN_common_ma_flush,
		RDY_common_ma_flush,

		common_ma_reset_done__done,
		EN_common_ma_reset_done,
		RDY_common_ma_reset_done,

		EN_icache_to_icache_get,
		icache_to_icache_get,
		RDY_icache_to_icache_get,

		tx_tx_to_stage1_notFull_b,

		tx_tx_to_stage1_enq_rdy_b,

		tx_tx_to_stage1_enq_ena,

		tx_tx_to_stage1_enq_data,

		s0_bpu_ma_train_bpu_td,
		EN_s0_bpu_ma_train_bpu,
		RDY_s0_bpu_ma_train_bpu,

		s0_bpu_ma_mispredict_g,
		EN_s0_bpu_ma_mispredict,
		RDY_s0_bpu_ma_mispredict,

		s0_bpu_ma_bpu_enable_e,
		EN_s0_bpu_ma_bpu_enable,
		RDY_s0_bpu_ma_bpu_enable);
  parameter [63 : 0] hartid = 64'b0;
  input  [63 : 0] resetpc;
  input  CLK;
  input  RST_N;

  // action method common_ma_update_eEpoch
  input  EN_common_ma_update_eEpoch;
  output RDY_common_ma_update_eEpoch;

  // action method common_ma_update_wEpoch
  input  EN_common_ma_update_wEpoch;
  output RDY_common_ma_update_wEpoch;

  // action method common_ma_flush
  input  [65 : 0] common_ma_flush_fl;
  input  EN_common_ma_flush;
  output RDY_common_ma_flush;

  // action method common_ma_reset_done
  input  common_ma_reset_done__done;
  input  EN_common_ma_reset_done;
  output RDY_common_ma_reset_done;

  // actionvalue method icache_to_icache_get
  input  EN_icache_to_icache_get;
  output [67 : 0] icache_to_icache_get;
  output RDY_icache_to_icache_get;

  // action method tx_tx_to_stage1_notFull
  input  tx_tx_to_stage1_notFull_b;

  // action method tx_tx_to_stage1_enq_rdy
  input  tx_tx_to_stage1_enq_rdy_b;

  // value method tx_tx_to_stage1_enq_ena
  output tx_tx_to_stage1_enq_ena;

  // value method tx_tx_to_stage1_enq_data
  output [76 : 0] tx_tx_to_stage1_enq_data;

  // action method s0_bpu_ma_train_bpu
  input  [141 : 0] s0_bpu_ma_train_bpu_td;
  input  EN_s0_bpu_ma_train_bpu;
  output RDY_s0_bpu_ma_train_bpu;

  // action method s0_bpu_ma_mispredict
  input  [8 : 0] s0_bpu_ma_mispredict_g;
  input  EN_s0_bpu_ma_mispredict;
  output RDY_s0_bpu_ma_mispredict;

  // action method s0_bpu_ma_bpu_enable
  input  s0_bpu_ma_bpu_enable_e;
  input  EN_s0_bpu_ma_bpu_enable;
  output RDY_s0_bpu_ma_bpu_enable;

  // signals for module outputs
  wire [76 : 0] tx_tx_to_stage1_enq_data;
  wire [67 : 0] icache_to_icache_get;
  wire RDY_common_ma_flush,
       RDY_common_ma_reset_done,
       RDY_common_ma_update_eEpoch,
       RDY_common_ma_update_wEpoch,
       RDY_icache_to_icache_get,
       RDY_s0_bpu_ma_bpu_enable,
       RDY_s0_bpu_ma_mispredict,
       RDY_s0_bpu_ma_train_bpu,
       tx_tx_to_stage1_enq_ena;

  // inlined wires
  wire [68 : 0] ff_to_cache_rv_port0__write_1,
		ff_to_cache_rv_port1__read,
		ff_to_cache_rv_port1__write_1,
		ff_to_cache_rv_port2__read;
  wire [64 : 0] rg_delayed_redirect_port0__write_1,
		rg_delayed_redirect_port1__read,
		rg_delayed_redirect_port1__write_1,
		rg_delayed_redirect_port2__read;
  wire [63 : 0] rg_pc_port1__read, rg_pc_port1__write_1, rg_pc_port2__read;
  wire rg_delayed_redirect_EN_port0__write,
       rg_fence_EN_port0__write,
       rg_fence_port1__read,
       rg_fence_port2__read,
       rg_pc_EN_port0__write,
       rg_pc_EN_port1__write,
       rg_sfence_EN_port0__write,
       rg_sfence_port1__read,
       rg_sfence_port2__read,
       tx_tostage1_w_ena_whas;

  // register ff_to_cache_rv
  reg [68 : 0] ff_to_cache_rv;
  wire [68 : 0] ff_to_cache_rv_D_IN;
  wire ff_to_cache_rv_EN;

  // register rg_delayed_redirect
  reg [64 : 0] rg_delayed_redirect;
  wire [64 : 0] rg_delayed_redirect_D_IN;
  wire rg_delayed_redirect_EN;

  // register rg_eEpoch
  reg rg_eEpoch;
  wire rg_eEpoch_D_IN, rg_eEpoch_EN;

  // register rg_fence
  reg rg_fence;
  wire rg_fence_D_IN, rg_fence_EN;

  // register rg_initialize
  reg rg_initialize;
  wire rg_initialize_D_IN, rg_initialize_EN;

  // register rg_pc
  reg [63 : 0] rg_pc;
  wire [63 : 0] rg_pc_D_IN;
  wire rg_pc_EN;

  // register rg_sfence
  reg rg_sfence;
  wire rg_sfence_D_IN, rg_sfence_EN;

  // register rg_wEpoch
  reg rg_wEpoch;
  wire rg_wEpoch_D_IN, rg_wEpoch_EN;

  // ports of submodule bpu
  wire [141 : 0] bpu_ma_train_bpu_td;
  wire [76 : 0] bpu_mav_prediction_response;
  wire [65 : 0] bpu_mav_prediction_response_r;
  wire [8 : 0] bpu_ma_mispredict_g;
  wire bpu_EN_ma_bpu_enable,
       bpu_EN_ma_mispredict,
       bpu_EN_ma_train_bpu,
       bpu_EN_mav_prediction_response,
       bpu_RDY_ma_mispredict,
       bpu_RDY_ma_train_bpu,
       bpu_RDY_mav_prediction_response,
       bpu_ma_bpu_enable_e;

  // rule scheduling signals
  wire CAN_FIRE_RL_rl_gen_next_pc,
       CAN_FIRE_RL_rl_initialize,
       CAN_FIRE_common_ma_flush,
       CAN_FIRE_common_ma_reset_done,
       CAN_FIRE_common_ma_update_eEpoch,
       CAN_FIRE_common_ma_update_wEpoch,
       CAN_FIRE_icache_to_icache_get,
       CAN_FIRE_s0_bpu_ma_bpu_enable,
       CAN_FIRE_s0_bpu_ma_mispredict,
       CAN_FIRE_s0_bpu_ma_train_bpu,
       CAN_FIRE_tx_tx_to_stage1_enq_rdy,
       CAN_FIRE_tx_tx_to_stage1_notFull,
       WILL_FIRE_RL_rl_gen_next_pc,
       WILL_FIRE_RL_rl_initialize,
       WILL_FIRE_common_ma_flush,
       WILL_FIRE_common_ma_reset_done,
       WILL_FIRE_common_ma_update_eEpoch,
       WILL_FIRE_common_ma_update_wEpoch,
       WILL_FIRE_icache_to_icache_get,
       WILL_FIRE_s0_bpu_ma_bpu_enable,
       WILL_FIRE_s0_bpu_ma_mispredict,
       WILL_FIRE_s0_bpu_ma_train_bpu,
       WILL_FIRE_tx_tx_to_stage1_enq_rdy,
       WILL_FIRE_tx_tx_to_stage1_notFull;

  // declarations used by system tasks
  // synopsys translate_off
  reg TASK_testplusargs___d6;
  reg TASK_testplusargs___d7;
  reg TASK_testplusargs___d8;
  reg [63 : 0] v__h1527;
  reg TASK_testplusargs___d25;
  reg TASK_testplusargs___d26;
  reg TASK_testplusargs___d27;
  reg [63 : 0] v__h1638;
  reg TASK_testplusargs___d58;
  reg TASK_testplusargs___d59;
  reg TASK_testplusargs___d60;
  reg [63 : 0] v__h2161;
  reg TASK_testplusargs___d81;
  reg TASK_testplusargs___d82;
  reg TASK_testplusargs___d83;
  reg [63 : 0] v__h2370;
  reg TASK_testplusargs___d97;
  reg TASK_testplusargs___d98;
  reg TASK_testplusargs___d99;
  reg [63 : 0] v__h2687;
  reg TASK_testplusargs___d110;
  reg TASK_testplusargs___d111;
  reg TASK_testplusargs___d112;
  reg [63 : 0] v__h3224;
  reg TASK_testplusargs___d119;
  reg TASK_testplusargs___d120;
  reg TASK_testplusargs___d121;
  reg [63 : 0] v__h3411;
  reg TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d65;
  reg TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d67;
  reg TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d69;
  reg TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d72;
  reg TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d76;
  reg TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d79;
  reg NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63;
  reg NOT_rg_fence_port0__read__5_1_AND_NOT_rg_sfenc_ETC___d115;
  reg TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d126;
  reg TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d128;
  reg TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d130;
  reg TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d132;
  // synopsys translate_on

  // remaining internal signals
  wire [63 : 0] nextpc__h1570,
		nextpc__h2303,
		y_avValue__h2058,
		y_avValue_snd__h2295;
  wire [1 : 0] curr_epoch__h1377;

  // action method common_ma_update_eEpoch
  assign RDY_common_ma_update_eEpoch = 1'd1 ;
  assign CAN_FIRE_common_ma_update_eEpoch = 1'd1 ;
  assign WILL_FIRE_common_ma_update_eEpoch = EN_common_ma_update_eEpoch ;

  // action method common_ma_update_wEpoch
  assign RDY_common_ma_update_wEpoch = 1'd1 ;
  assign CAN_FIRE_common_ma_update_wEpoch = 1'd1 ;
  assign WILL_FIRE_common_ma_update_wEpoch = EN_common_ma_update_wEpoch ;

  // action method common_ma_flush
  assign RDY_common_ma_flush =
	     !rg_initialize && common_ma_reset_done__done &&
	     EN_common_ma_reset_done ;
  assign CAN_FIRE_common_ma_flush =
	     !rg_initialize && common_ma_reset_done__done &&
	     EN_common_ma_reset_done ;
  assign WILL_FIRE_common_ma_flush = EN_common_ma_flush ;

  // action method common_ma_reset_done
  assign RDY_common_ma_reset_done = 1'd1 ;
  assign CAN_FIRE_common_ma_reset_done = 1'd1 ;
  assign WILL_FIRE_common_ma_reset_done = EN_common_ma_reset_done ;

  // actionvalue method icache_to_icache_get
  assign icache_to_icache_get = ff_to_cache_rv_port1__read[67:0] ;
  assign RDY_icache_to_icache_get = ff_to_cache_rv_port1__read[68] ;
  assign CAN_FIRE_icache_to_icache_get = ff_to_cache_rv_port1__read[68] ;
  assign WILL_FIRE_icache_to_icache_get = EN_icache_to_icache_get ;

  // action method tx_tx_to_stage1_notFull
  assign CAN_FIRE_tx_tx_to_stage1_notFull = 1'd1 ;
  assign WILL_FIRE_tx_tx_to_stage1_notFull = 1'd1 ;

  // action method tx_tx_to_stage1_enq_rdy
  assign CAN_FIRE_tx_tx_to_stage1_enq_rdy = 1'd1 ;
  assign WILL_FIRE_tx_tx_to_stage1_enq_rdy = 1'd1 ;

  // value method tx_tx_to_stage1_enq_ena
  assign tx_tx_to_stage1_enq_ena = tx_tostage1_w_ena_whas ;

  // value method tx_tx_to_stage1_enq_data
  assign tx_tx_to_stage1_enq_data =
	     { rg_pc[1],
	       bpu_mav_prediction_response[11:0],
	       rg_pc[63:2],
	       2'd0 } ;

  // action method s0_bpu_ma_train_bpu
  assign RDY_s0_bpu_ma_train_bpu = bpu_RDY_ma_train_bpu ;
  assign CAN_FIRE_s0_bpu_ma_train_bpu = bpu_RDY_ma_train_bpu ;
  assign WILL_FIRE_s0_bpu_ma_train_bpu = EN_s0_bpu_ma_train_bpu ;

  // action method s0_bpu_ma_mispredict
  assign RDY_s0_bpu_ma_mispredict = bpu_RDY_ma_mispredict ;
  assign CAN_FIRE_s0_bpu_ma_mispredict = bpu_RDY_ma_mispredict ;
  assign WILL_FIRE_s0_bpu_ma_mispredict = EN_s0_bpu_ma_mispredict ;

  // action method s0_bpu_ma_bpu_enable
  assign RDY_s0_bpu_ma_bpu_enable = 1'd1 ;
  assign CAN_FIRE_s0_bpu_ma_bpu_enable = 1'd1 ;
  assign WILL_FIRE_s0_bpu_ma_bpu_enable = EN_s0_bpu_ma_bpu_enable ;

  // submodule bpu
  mkbpu #(.hartid(hartid)) bpu(.CLK(CLK),
			       .RST_N(RST_N),
			       .ma_bpu_enable_e(bpu_ma_bpu_enable_e),
			       .ma_mispredict_g(bpu_ma_mispredict_g),
			       .ma_train_bpu_td(bpu_ma_train_bpu_td),
			       .mav_prediction_response_r(bpu_mav_prediction_response_r),
			       .EN_mav_prediction_response(bpu_EN_mav_prediction_response),
			       .EN_ma_train_bpu(bpu_EN_ma_train_bpu),
			       .EN_ma_mispredict(bpu_EN_ma_mispredict),
			       .EN_ma_bpu_enable(bpu_EN_ma_bpu_enable),
			       .mav_prediction_response(bpu_mav_prediction_response),
			       .RDY_mav_prediction_response(bpu_RDY_mav_prediction_response),
			       .RDY_ma_train_bpu(bpu_RDY_ma_train_bpu),
			       .RDY_ma_mispredict(bpu_RDY_ma_mispredict),
			       .RDY_ma_bpu_enable());

  // rule RL_rl_initialize
  assign CAN_FIRE_RL_rl_initialize =
	     EN_common_ma_reset_done && rg_initialize &&
	     common_ma_reset_done__done ;
  assign WILL_FIRE_RL_rl_initialize = CAN_FIRE_RL_rl_initialize ;

  // rule RL_rl_gen_next_pc
  assign CAN_FIRE_RL_rl_gen_next_pc =
	     !ff_to_cache_rv[68] && EN_common_ma_reset_done &&
	     bpu_RDY_mav_prediction_response &&
	     tx_tx_to_stage1_enq_rdy_b &&
	     tx_tx_to_stage1_notFull_b &&
	     !rg_initialize &&
	     common_ma_reset_done__done ;
  assign WILL_FIRE_RL_rl_gen_next_pc = CAN_FIRE_RL_rl_gen_next_pc ;

  // inlined wires
  assign tx_tostage1_w_ena_whas =
	     WILL_FIRE_RL_rl_gen_next_pc && !rg_fence && !rg_sfence ;
  assign ff_to_cache_rv_port0__write_1 =
	     { 1'd1,
	       rg_pc[63:2],
	       2'd0,
	       curr_epoch__h1377,
	       rg_fence,
	       rg_sfence } ;
  assign ff_to_cache_rv_port1__read =
	     CAN_FIRE_RL_rl_gen_next_pc ?
	       ff_to_cache_rv_port0__write_1 :
	       ff_to_cache_rv ;
  assign ff_to_cache_rv_port1__write_1 =
	     { 1'd0,
	       68'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx /* unspecified value */  } ;
  assign ff_to_cache_rv_port2__read =
	     EN_icache_to_icache_get ?
	       ff_to_cache_rv_port1__write_1 :
	       ff_to_cache_rv_port1__read ;
  assign rg_pc_EN_port0__write =
	     WILL_FIRE_RL_rl_gen_next_pc && !rg_fence && !rg_sfence ;
  assign rg_pc_port1__read = rg_pc_EN_port0__write ? nextpc__h2303 : rg_pc ;
  assign rg_pc_EN_port1__write =
	     WILL_FIRE_RL_rl_initialize || EN_common_ma_flush ;
  assign rg_pc_port1__write_1 =
	     WILL_FIRE_RL_rl_initialize ? resetpc : common_ma_flush_fl[63:0] ;
  assign rg_pc_port2__read =
	     rg_pc_EN_port1__write ?
	       rg_pc_port1__write_1 :
	       rg_pc_port1__read ;
  assign rg_fence_EN_port0__write = WILL_FIRE_RL_rl_gen_next_pc && rg_fence ;
  assign rg_fence_port1__read = !rg_fence_EN_port0__write && rg_fence ;
  assign rg_fence_port2__read =
	     EN_common_ma_flush ?
	       common_ma_flush_fl[65] :
	       rg_fence_port1__read ;
  assign rg_sfence_EN_port0__write =
	     WILL_FIRE_RL_rl_gen_next_pc && rg_sfence ;
  assign rg_sfence_port1__read = !rg_sfence_EN_port0__write && rg_sfence ;
  assign rg_sfence_port2__read =
	     EN_common_ma_flush ?
	       common_ma_flush_fl[64] :
	       rg_sfence_port1__read ;
  assign rg_delayed_redirect_EN_port0__write =
	     WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence &&
	     (rg_delayed_redirect[64] ||
	      bpu_mav_prediction_response[11] &&
	      !bpu_mav_prediction_response[76] &&
	      bpu_mav_prediction_response[2:1] > 2'd1 &&
	      !rg_fence) ;
  assign rg_delayed_redirect_port0__write_1 =
	     { !rg_delayed_redirect[64],
	       bpu_mav_prediction_response[75:12] } ;
  assign rg_delayed_redirect_port1__read =
	     rg_delayed_redirect_EN_port0__write ?
	       rg_delayed_redirect_port0__write_1 :
	       rg_delayed_redirect ;
  assign rg_delayed_redirect_port1__write_1 =
	     { 1'd0,
	       64'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx /* unspecified value */  } ;
  assign rg_delayed_redirect_port2__read =
	     EN_common_ma_flush ?
	       rg_delayed_redirect_port1__write_1 :
	       rg_delayed_redirect_port1__read ;

  // register ff_to_cache_rv
  assign ff_to_cache_rv_D_IN = ff_to_cache_rv_port2__read ;
  assign ff_to_cache_rv_EN = 1'b1 ;

  // register rg_delayed_redirect
  assign rg_delayed_redirect_D_IN = rg_delayed_redirect_port2__read ;
  assign rg_delayed_redirect_EN = 1'b1 ;

  // register rg_eEpoch
  assign rg_eEpoch_D_IN = ~rg_eEpoch ;
  assign rg_eEpoch_EN = EN_common_ma_update_eEpoch ;

  // register rg_fence
  assign rg_fence_D_IN = rg_fence_port2__read ;
  assign rg_fence_EN = 1'b1 ;

  // register rg_initialize
  assign rg_initialize_D_IN = 1'd0 ;
  assign rg_initialize_EN = CAN_FIRE_RL_rl_initialize ;

  // register rg_pc
  assign rg_pc_D_IN = rg_pc_port2__read ;
  assign rg_pc_EN = 1'b1 ;

  // register rg_sfence
  assign rg_sfence_D_IN = rg_sfence_port2__read ;
  assign rg_sfence_EN = 1'b1 ;

  // register rg_wEpoch
  assign rg_wEpoch_D_IN = ~rg_wEpoch ;
  assign rg_wEpoch_EN = EN_common_ma_update_wEpoch ;

  // submodule bpu
  assign bpu_ma_bpu_enable_e = s0_bpu_ma_bpu_enable_e ;
  assign bpu_ma_mispredict_g = s0_bpu_ma_mispredict_g ;
  assign bpu_ma_train_bpu_td = s0_bpu_ma_train_bpu_td ;
  assign bpu_mav_prediction_response_r = { rg_fence, rg_pc[1], rg_pc } ;
  assign bpu_EN_mav_prediction_response =
	     WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence ;
  assign bpu_EN_ma_train_bpu = EN_s0_bpu_ma_train_bpu ;
  assign bpu_EN_ma_mispredict = EN_s0_bpu_ma_mispredict ;
  assign bpu_EN_ma_bpu_enable = EN_s0_bpu_ma_bpu_enable ;

  // remaining internal signals
  assign curr_epoch__h1377 = { rg_eEpoch, rg_wEpoch } ;
  assign nextpc__h1570 = { rg_pc[63:2], 2'd0 } + 64'd4 ;
  assign nextpc__h2303 = rg_sfence ? nextpc__h1570 : y_avValue_snd__h2295 ;
  assign y_avValue__h2058 =
	     (bpu_mav_prediction_response[2] &&
	      bpu_mav_prediction_response[0] &&
	      (!bpu_mav_prediction_response[11] ||
	       bpu_mav_prediction_response[76])) ?
	       bpu_mav_prediction_response[75:12] :
	       nextpc__h1570 ;
  assign y_avValue_snd__h2295 =
	     rg_delayed_redirect[64] ?
	       rg_delayed_redirect[63:0] :
	       y_avValue__h2058 ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        ff_to_cache_rv <= `BSV_ASSIGNMENT_DELAY
	    { 1'd0,
	      68'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx /* unspecified value */  };
	rg_delayed_redirect <= `BSV_ASSIGNMENT_DELAY
	    { 1'd0,
	      64'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx /* unspecified value */  };
	rg_eEpoch <= `BSV_ASSIGNMENT_DELAY 1'd0;
	rg_fence <= `BSV_ASSIGNMENT_DELAY 1'd0;
	rg_initialize <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_pc <= `BSV_ASSIGNMENT_DELAY 64'h0000000000001000;
	rg_sfence <= `BSV_ASSIGNMENT_DELAY 1'd0;
	rg_wEpoch <= `BSV_ASSIGNMENT_DELAY 1'd0;
      end
    else
      begin
        if (ff_to_cache_rv_EN)
	  ff_to_cache_rv <= `BSV_ASSIGNMENT_DELAY ff_to_cache_rv_D_IN;
	if (rg_delayed_redirect_EN)
	  rg_delayed_redirect <= `BSV_ASSIGNMENT_DELAY
	      rg_delayed_redirect_D_IN;
	if (rg_eEpoch_EN) rg_eEpoch <= `BSV_ASSIGNMENT_DELAY rg_eEpoch_D_IN;
	if (rg_fence_EN) rg_fence <= `BSV_ASSIGNMENT_DELAY rg_fence_D_IN;
	if (rg_initialize_EN)
	  rg_initialize <= `BSV_ASSIGNMENT_DELAY rg_initialize_D_IN;
	if (rg_pc_EN) rg_pc <= `BSV_ASSIGNMENT_DELAY rg_pc_D_IN;
	if (rg_sfence_EN) rg_sfence <= `BSV_ASSIGNMENT_DELAY rg_sfence_D_IN;
	if (rg_wEpoch_EN) rg_wEpoch <= `BSV_ASSIGNMENT_DELAY rg_wEpoch_D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    ff_to_cache_rv = 69'h0AAAAAAAAAAAAAAAAA;
    rg_delayed_redirect = 65'h0AAAAAAAAAAAAAAAA;
    rg_eEpoch = 1'h0;
    rg_fence = 1'h0;
    rg_initialize = 1'h0;
    rg_pc = 64'hAAAAAAAAAAAAAAAA;
    rg_sfence = 1'h0;
    rg_wEpoch = 1'h0;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on

  // handling of system tasks

  // synopsys translate_off
  always@(negedge CLK)
  begin
    #0;
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_initialize)
	begin
	  TASK_testplusargs___d6 = $test$plusargs("fullverbose");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_initialize)
	begin
	  TASK_testplusargs___d7 = $test$plusargs("mstage0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_initialize)
	begin
	  TASK_testplusargs___d8 = $test$plusargs("l0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_initialize)
	begin
	  v__h1527 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_initialize &&
	  (TASK_testplusargs___d6 ||
	   TASK_testplusargs___d7 && TASK_testplusargs___d8))
	$write("[%10d", v__h1527, "] ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_initialize &&
	  (TASK_testplusargs___d6 ||
	   TASK_testplusargs___d7 && TASK_testplusargs___d8))
	$write("STAGE0: Setting PC:%h", resetpc);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_initialize &&
	  (TASK_testplusargs___d6 ||
	   TASK_testplusargs___d7 && TASK_testplusargs___d8))
	$write("\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  TASK_testplusargs___d25 = $test$plusargs("fullverbose");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  TASK_testplusargs___d26 = $test$plusargs("mstage0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  TASK_testplusargs___d27 = $test$plusargs("l0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  v__h1638 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  (TASK_testplusargs___d25 ||
	   TASK_testplusargs___d26 && TASK_testplusargs___d27))
	$write("[%10d", v__h1638, "] ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  (TASK_testplusargs___d25 ||
	   TASK_testplusargs___d26 && TASK_testplusargs___d27))
	$write("STAGE0: nextpc: %h ", nextpc__h1570, " fencei:%b", rg_fence);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  (TASK_testplusargs___d25 ||
	   TASK_testplusargs___d26 && TASK_testplusargs___d27))
	$write("\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence)
	begin
	  TASK_testplusargs___d58 = $test$plusargs("fullverbose");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence)
	begin
	  TASK_testplusargs___d59 = $test$plusargs("mstage0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence)
	begin
	  TASK_testplusargs___d60 = $test$plusargs("l0");
	  #0;
	end
    TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d65 =
	(TASK_testplusargs___d58 ||
	 TASK_testplusargs___d59 && TASK_testplusargs___d60) &&
	bpu_mav_prediction_response[76];
    TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d67 =
	(TASK_testplusargs___d58 ||
	 TASK_testplusargs___d59 && TASK_testplusargs___d60) &&
	!bpu_mav_prediction_response[76];
    TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d69 =
	(TASK_testplusargs___d58 ||
	 TASK_testplusargs___d59 && TASK_testplusargs___d60) &&
	bpu_mav_prediction_response[11];
    TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d72 =
	(TASK_testplusargs___d58 ||
	 TASK_testplusargs___d59 && TASK_testplusargs___d60) &&
	!bpu_mav_prediction_response[11];
    TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d79 =
	(TASK_testplusargs___d58 ||
	 TASK_testplusargs___d59 && TASK_testplusargs___d60) &&
	!bpu_mav_prediction_response[0];
    TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d76 =
	(TASK_testplusargs___d58 ||
	 TASK_testplusargs___d59 && TASK_testplusargs___d60) &&
	bpu_mav_prediction_response[0];
    NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63 =
	!rg_sfence &&
	(TASK_testplusargs___d58 ||
	 TASK_testplusargs___d59 && TASK_testplusargs___d60);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence)
	begin
	  v__h2161 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write("[%10d", v__h2161, "] ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write("[%2d]STAGE0: BPU response:", hartid);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write("PredictionResponse { ", "instr16: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence &&
	  TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d65)
	$write("True");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence &&
	  TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d67)
	$write("False");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write(", ", "nextpc: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write("'h%h", bpu_mav_prediction_response[75:12]);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write(", ", "btbresponse: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write("BTBResponse { ", "hi: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence &&
	  TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d69)
	$write("True");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence &&
	  TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d72)
	$write("False");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write(", ", "history: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write("'h%h", bpu_mav_prediction_response[10:3]);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write(", ", "prediction: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write("'h%h", bpu_mav_prediction_response[2:1]);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write(", ", "btbhit: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence &&
	  TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d76)
	$write("True");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_sfence &&
	  TASK_testplusargs_8_OR_TASK_testplusargs_9_AND_ETC___d79)
	$write("False");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write(" }");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write(" }");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_sfence_port0__read__6_7_AND_TASK_testpl_ETC___d63)
	$write("\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  TASK_testplusargs___d81 = $test$plusargs("fullverbose");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  TASK_testplusargs___d82 = $test$plusargs("mstage0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  TASK_testplusargs___d83 = $test$plusargs("l0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  v__h2370 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  (TASK_testplusargs___d81 ||
	   TASK_testplusargs___d82 && TASK_testplusargs___d83))
	$write("[%10d", v__h2370, "] ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  (TASK_testplusargs___d81 ||
	   TASK_testplusargs___d82 && TASK_testplusargs___d83))
	$write("STAGE0: nextpc1: %h ", nextpc__h2303);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  (TASK_testplusargs___d81 ||
	   TASK_testplusargs___d82 && TASK_testplusargs___d83))
	$write("\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  TASK_testplusargs___d97 = $test$plusargs("fullverbose");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  TASK_testplusargs___d98 = $test$plusargs("mstage0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  TASK_testplusargs___d99 = $test$plusargs("l0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc)
	begin
	  v__h2687 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  (TASK_testplusargs___d97 ||
	   TASK_testplusargs___d98 && TASK_testplusargs___d99))
	$write("[%10d", v__h2687, "] ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  (TASK_testplusargs___d97 ||
	   TASK_testplusargs___d98 && TASK_testplusargs___d99))
	$write("[%2d]STAGE0: Sending PC:%h to I$. ",
	       hartid,
	       { rg_pc[63:2], 2'd0 });
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  (TASK_testplusargs___d97 ||
	   TASK_testplusargs___d98 && TASK_testplusargs___d99))
	$write("\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_fence && !rg_sfence)
	begin
	  TASK_testplusargs___d110 = $test$plusargs("fullverbose");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_fence && !rg_sfence)
	begin
	  TASK_testplusargs___d111 = $test$plusargs("mstage0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_fence && !rg_sfence)
	begin
	  TASK_testplusargs___d112 = $test$plusargs("l0");
	  #0;
	end
    NOT_rg_fence_port0__read__5_1_AND_NOT_rg_sfenc_ETC___d115 =
	!rg_fence && !rg_sfence &&
	(TASK_testplusargs___d110 ||
	 TASK_testplusargs___d111 && TASK_testplusargs___d112);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc && !rg_fence && !rg_sfence)
	begin
	  v__h3224 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_fence_port0__read__5_1_AND_NOT_rg_sfenc_ETC___d115)
	$write("[%10d", v__h3224, "] ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_fence_port0__read__5_1_AND_NOT_rg_sfenc_ETC___d115)
	$write("[%2d]STAGE0: Sending PC:%h to Stage1", hartid, rg_pc);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_gen_next_pc &&
	  NOT_rg_fence_port0__read__5_1_AND_NOT_rg_sfenc_ETC___d115)
	$write("\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush)
	begin
	  TASK_testplusargs___d119 = $test$plusargs("fullverbose");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush)
	begin
	  TASK_testplusargs___d120 = $test$plusargs("mstage0");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush)
	begin
	  TASK_testplusargs___d121 = $test$plusargs("l1");
	  #0;
	end
    TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d126 =
	(TASK_testplusargs___d119 ||
	 TASK_testplusargs___d120 && TASK_testplusargs___d121) &&
	common_ma_flush_fl[65];
    TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d128 =
	(TASK_testplusargs___d119 ||
	 TASK_testplusargs___d120 && TASK_testplusargs___d121) &&
	!common_ma_flush_fl[65];
    TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d130 =
	(TASK_testplusargs___d119 ||
	 TASK_testplusargs___d120 && TASK_testplusargs___d121) &&
	common_ma_flush_fl[64];
    TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d132 =
	(TASK_testplusargs___d119 ||
	 TASK_testplusargs___d120 && TASK_testplusargs___d121) &&
	!common_ma_flush_fl[64];
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush)
	begin
	  v__h3411 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  (TASK_testplusargs___d119 ||
	   TASK_testplusargs___d120 && TASK_testplusargs___d121))
	$write("[%10d", v__h3411, "] ");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  (TASK_testplusargs___d119 ||
	   TASK_testplusargs___d120 && TASK_testplusargs___d121))
	$write("[%2d]STAGE0: Recieved Flush:", hartid);
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  (TASK_testplusargs___d119 ||
	   TASK_testplusargs___d120 && TASK_testplusargs___d121))
	$write("Stage0Flush { ", "fence: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d126)
	$write("True");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d128)
	$write("False");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  (TASK_testplusargs___d119 ||
	   TASK_testplusargs___d120 && TASK_testplusargs___d121))
	$write(", ", "sfence: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d130)
	$write("True");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  TASK_testplusargs_19_OR_TASK_testplusargs_20_A_ETC___d132)
	$write("False");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  (TASK_testplusargs___d119 ||
	   TASK_testplusargs___d120 && TASK_testplusargs___d121))
	$write(", ", "pc: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  (TASK_testplusargs___d119 ||
	   TASK_testplusargs___d120 && TASK_testplusargs___d121))
	$write("'h%h", common_ma_flush_fl[63:0], " }");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_common_ma_flush &&
	  (TASK_testplusargs___d119 ||
	   TASK_testplusargs___d120 && TASK_testplusargs___d121))
	$write("\n");
  end
  // synopsys translate_on
endmodule  // mkstage0

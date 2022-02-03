module myproject_testbench();

    logic   ap_clk;
    logic   ap_rst;
    logic   ap_start;
    logic   ap_done;
    logic   ap_idle;
    logic   ap_ready;
    logic   conv2d_1_input_V_ap_vld;
    logic  [1023:0] conv2d_1_input_V;
    logic  [15:0] layer5_out_0_V;
    logic   layer5_out_0_V_ap_vld;
    logic  [15:0] layer5_out_1_V;
    logic   layer5_out_1_V_ap_vld;
    logic  [15:0] layer5_out_2_V;
    logic   layer5_out_2_V_ap_vld;
    logic  [15:0] layer5_out_3_V;
    logic   layer5_out_3_V_ap_vld;
    logic  [15:0] layer5_out_4_V;
    logic   layer5_out_4_V_ap_vld;
    logic  [15:0] layer5_out_5_V;
    logic   layer5_out_5_V_ap_vld;
    logic  [15:0] layer5_out_6_V;
    logic   layer5_out_6_V_ap_vld;
    logic  [15:0] layer5_out_7_V;
    logic   layer5_out_7_V_ap_vld;
    logic  [15:0] layer5_out_8_V;
    logic   layer5_out_8_V_ap_vld;
    logic  [15:0] layer5_out_9_V;
    logic   layer5_out_9_V_ap_vld;
    logic  [15:0] const_size_in_1;
    logic   const_size_in_1_ap_vld;
    logic  [15:0] const_size_out_1;
    logic   const_size_out_1_ap_vld;

    myproject(.*);
    
    // ap clock stuff
    
    assign conv2d_1_input_V = {16'd0, 16'd0, 16'd0, 16'd0, 16'd0, 16'd0, 16'd0, 16'd0,
                       16'd1, 16'd1, 16'd1, 16'd1, 16'd1, 16'd1, 16'd1, 16'd1,
                       16'd2, 16'd2, 16'd2, 16'd2, 16'd2, 16'd2, 16'd2, 16'd2,
                       16'd3, 16'd3, 16'd3, 16'd3, 16'd3, 16'd3, 16'd3, 16'd3,
                       16'd4, 16'd4, 16'd4, 16'd4, 16'd4, 16'd4, 16'd4, 16'd4,
                       16'd5, 16'd5, 16'd5, 16'd5, 16'd5, 16'd5, 16'd5, 16'd5,
                       16'd6, 16'd6, 16'd6, 16'd6, 16'd6, 16'd6, 16'd6, 16'd6,
                       16'd7, 16'd7, 16'd7, 16'd7, 16'd7, 16'd7, 16'd7, 16'd7};
    
    initial begin
        ap_rst  <= 1; @(posedge ap_clk);
        ap_rst <= 0; ap_start <= 1; conv2d_1_input_V_ap_vld <= 1; @(posedge ap_clk);
    end

endmodule
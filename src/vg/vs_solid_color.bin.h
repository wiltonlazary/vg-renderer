static const uint8_t vs_solid_color_glsl[431] =
{
	0x56, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // elViewProj......
	0x8a, 0x01, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, // ....attribute hi
	0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // ghp vec4 a_color
	0x30, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, // 0;.attribute hig
	0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // hp vec2 a_positi
	0x6f, 0x6e, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, // on;.attribute hi
	0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // ghp vec2 a_texco
	0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, // ord0;.varying hi
	0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // ghp vec4 v_color
	0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // 0;.varying highp
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, //  vec2 v_texcoord
	0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // 0;.uniform highp
	0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, //  mat4 u_modelVie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // wProj;.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, //  ().{.  highp ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_1;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, // mpvar_1.zw = vec
	0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, // 2(0.0, 1.0);.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, // mpvar_1.xy = a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, // osition;.  gl_Po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, // sition = (u_mode
	0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // lViewProj * tmpv
	0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // ar_1);.  v_color
	0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, // 0 = a_color0;.  
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, // v_texcoord0 = a_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,       // texcoord0;.}...
};
static const uint8_t vs_solid_color_spv[3193] =
{
	0x56, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // elViewProj......
	0x54, 0x0c, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, // T.....#.........
	0x36, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, // 6b..............
	0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, // ........GLSL.std
	0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // .450............
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, // ................
	0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x89, 0x14, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, // main............
	0x95, 0x0e, 0x00, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, // ................
	0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x1f, 0x16, 0x00, 0x00, // ................
	0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x64, 0x04, 0x00, 0x00, // main........d...
	0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x64, 0x04, 0x00, 0x00, // Output......d...
	0x00, 0x00, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, // ....gl_Position.
	0x06, 0x00, 0x06, 0x00, 0x64, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, // ....d.......v_co
	0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x64, 0x04, 0x00, 0x00, // lor0........d...
	0x02, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, // ....v_texcoord0.
	0x05, 0x00, 0x07, 0x00, 0xf7, 0x11, 0x00, 0x00, 0x40, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x76, 0x66, // ........@main(vf
	0x34, 0x3b, 0x76, 0x66, 0x32, 0x3b, 0x76, 0x66, 0x32, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, // 4;vf2;vf2;......
	0x4f, 0x2e, 0x00, 0x00, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, // O...a_color0....
	0x05, 0x00, 0x05, 0x00, 0x3a, 0x19, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // ....:...a_positi
	0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xb9, 0x4d, 0x00, 0x00, 0x61, 0x5f, 0x74, 0x65, // on.......M..a_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x05, 0x00, 0x0f, 0x12, 0x00, 0x00, // xcoord0.........
	0x5f, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x5f, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, // _varying_.......
	0xbc, 0x01, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, // ....$Global.....
	0xbc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, // ........u_viewRe
	0x63, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ct..............
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, // u_viewTexel.....
	0xbc, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, // ........u_view..
	0x06, 0x00, 0x06, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, // ............u_in
	0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, // vView...........
	0x04, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, // ....u_proj......
	0xbc, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, // ........u_invPro
	0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, // j...............
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, // u_viewProj......
	0xbc, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, // ........u_invVie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, // wProj...........
	0x08, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, // ....u_model.....
	0xbc, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, // ........u_modelV
	0x69, 0x65, 0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, // iew.............
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, // u_modelViewProj.
	0x06, 0x00, 0x06, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, // ............u_al
	0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x05, 0x00, 0x03, 0x00, 0x42, 0x13, 0x00, 0x00, // phaRef4.....B...
	0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xb8, 0x41, 0x00, 0x00, 0x61, 0x5f, 0x63, 0x6f, // .........A..a_co
	0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x89, 0x14, 0x00, 0x00, // lor0............
	0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, // a_color0........
	0xd9, 0x3f, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, // .?..a_position..
	0x05, 0x00, 0x05, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // ........a_positi
	0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x40, 0x2c, 0x00, 0x00, 0x61, 0x5f, 0x74, 0x65, // on......@,..a_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x05, 0x00, 0x95, 0x0e, 0x00, 0x00, // xcoord0.........
	0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x05, 0x00, // a_texcoord0.....
	0x08, 0x10, 0x00, 0x00, 0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x54, 0x65, 0x6d, 0x70, 0x00, // ....flattenTemp.
	0x05, 0x00, 0x04, 0x00, 0x85, 0x55, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, // .....U..param...
	0x05, 0x00, 0x04, 0x00, 0x95, 0x38, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, // .....8..param...
	0x05, 0x00, 0x04, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, // ........param...
	0x05, 0x00, 0x0a, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, // ........@entryPo
	0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, // intOutput_gl_Pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x1a, 0x04, 0x00, 0x00, // ition...........
	0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x1a, 0x04, 0x00, 0x00, // Output..........
	0x00, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, // ....v_color0....
	0x06, 0x00, 0x06, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, // ............v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x07, 0x00, 0xcd, 0x0f, 0x00, 0x00, // xcoord0.........
	0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, // @entryPointOutpu
	0x74, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4e, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, // t...G...N.......
	0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // @...H...........
	0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, // #.......H.......
	0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ....#.......H...
	0xbc, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ............H...
	0xbc, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ........#... ...
	0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...............
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....H...........
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....H...........
	0x23, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, // #...`...H.......
	0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0xbc, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ............H...
	0xbc, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, // ........#.......
	0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...............
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....H...........
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....H...........
	0x23, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, // #.......H.......
	0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0xbc, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ............H...
	0xbc, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, // ........#... ...
	0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...............
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ....H...........
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ....H...........
	0x23, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, // #...`...H.......
	0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0xbc, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ............H...
	0xbc, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, // ........#.......
	0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...............
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // ....H...........
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // ....H...........
	0x23, 0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, // #.......H.......
	0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0xbc, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ............H...
	0xbc, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, // ........#.......
	0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...............
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, // ....H...........
	0x23, 0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0xbc, 0x01, 0x00, 0x00, // #... ...G.......
	0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, 0x13, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // ....G...B..."...
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x89, 0x14, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...........
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...........
	0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x95, 0x0e, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...........
	0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, // ....G...........
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...........
	0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, // ............!...
	0x02, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00, // ................
	0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, //  ...............
	0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // .... ...........
	0x1d, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x90, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // .... ...........
	0x13, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x05, 0x00, 0x64, 0x04, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, // ........d.......
	0x1d, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x21, 0x00, 0x06, 0x00, 0xef, 0x08, 0x00, 0x00, // ........!.......
	0x64, 0x04, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x90, 0x02, 0x00, 0x00, 0x90, 0x02, 0x00, 0x00, // d...............
	0x20, 0x00, 0x04, 0x00, 0xe1, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x64, 0x04, 0x00, 0x00, //  ...........d...
	0x15, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ........ .......
	0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // +...............
	0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, // +..............?
	0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // +...............
	0x2c, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x88, 0x05, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, // ,...............
	0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, // ............+...
	0x0c, 0x00, 0x00, 0x00, 0x11, 0x0a, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x05, 0x00, // ............,...
	0x13, 0x00, 0x00, 0x00, 0x1f, 0x07, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, // ................
	0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // +...............
	0x18, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ....e...........
	0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........ .......
	0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // +.......j... ...
	0x1c, 0x00, 0x04, 0x00, 0x4e, 0x03, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, // ....N...e...j...
	0x1e, 0x00, 0x0e, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, // ................
	0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, // e...e...e...e...
	0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x4e, 0x03, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, // e...e...N...e...
	0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x39, 0x04, 0x00, 0x00, // e....... ...9...
	0x02, 0x00, 0x00, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x39, 0x04, 0x00, 0x00, // ........;...9...
	0x42, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, // B.......+.......
	0x29, 0x0a, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xe2, 0x02, 0x00, 0x00, // )....... .......
	0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, // ....e... .......
	0x01, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, // ........;.......
	0x89, 0x14, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x91, 0x02, 0x00, 0x00, // ........ .......
	0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x91, 0x02, 0x00, 0x00, // ........;.......
	0xa6, 0x14, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x91, 0x02, 0x00, 0x00, // ........;.......
	0x95, 0x0e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, // ........ .......
	0x03, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, // ........;.......
	0xd8, 0x0c, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x04, 0x00, 0x1a, 0x04, 0x00, 0x00, // ................
	0x1d, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x97, 0x06, 0x00, 0x00, // ........ .......
	0x03, 0x00, 0x00, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x97, 0x06, 0x00, 0x00, // ........;.......
	0xcd, 0x0f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x92, 0x02, 0x00, 0x00, // ........ .......
	0x03, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, // ........6.......
	0x1f, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, // ................
	0x53, 0x61, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xe1, 0x06, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, // Sa..;...........
	0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x85, 0x55, 0x00, 0x00, // ....;........U..
	0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x90, 0x02, 0x00, 0x00, 0x95, 0x38, 0x00, 0x00, // ....;........8..
	0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x90, 0x02, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, // ....;...........
	0x07, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xb8, 0x41, 0x00, 0x00, // ....=........A..
	0x89, 0x14, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0xd9, 0x3f, 0x00, 0x00, // ....=........?..
	0xa6, 0x14, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0x40, 0x2c, 0x00, 0x00, // ....=.......@,..
	0x95, 0x0e, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x85, 0x55, 0x00, 0x00, 0xb8, 0x41, 0x00, 0x00, // ....>....U...A..
	0x3e, 0x00, 0x03, 0x00, 0x95, 0x38, 0x00, 0x00, 0xd9, 0x3f, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, // >....8...?..>...
	0x9a, 0x16, 0x00, 0x00, 0x40, 0x2c, 0x00, 0x00, 0x39, 0x00, 0x07, 0x00, 0x64, 0x04, 0x00, 0x00, // ....@,..9...d...
	0x49, 0x26, 0x00, 0x00, 0xf7, 0x11, 0x00, 0x00, 0x85, 0x55, 0x00, 0x00, 0x95, 0x38, 0x00, 0x00, // I&.......U...8..
	0x9a, 0x16, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x08, 0x10, 0x00, 0x00, 0x49, 0x26, 0x00, 0x00, // ....>.......I&..
	0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x54, 0x34, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, // A.......T4......
	0x0b, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, // ....=...........
	0x54, 0x34, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, // T4..>...........
	0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x27, 0x41, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, // A.......'A......
	0x0e, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xdf, 0x1c, 0x00, 0x00, // ....=...........
	0x27, 0x41, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x9c, 0x02, 0x00, 0x00, 0x0d, 0x4e, 0x00, 0x00, // 'A..A........N..
	0xcd, 0x0f, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x0d, 0x4e, 0x00, 0x00, // ........>....N..
	0xdf, 0x1c, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x90, 0x02, 0x00, 0x00, 0xc1, 0x4d, 0x00, 0x00, // ....A........M..
	0x08, 0x10, 0x00, 0x00, 0x11, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, // ........=.......
	0xe0, 0x1c, 0x00, 0x00, 0xc1, 0x4d, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x92, 0x02, 0x00, 0x00, // .....M..A.......
	0x01, 0x5c, 0x00, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, // ............>...
	0x01, 0x5c, 0x00, 0x00, 0xe0, 0x1c, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, // ............8...
	0x36, 0x00, 0x05, 0x00, 0x64, 0x04, 0x00, 0x00, 0xf7, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 6...d...........
	0xef, 0x08, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x4f, 0x2e, 0x00, 0x00, // ....7.......O...
	0x37, 0x00, 0x03, 0x00, 0x90, 0x02, 0x00, 0x00, 0x3a, 0x19, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, // 7.......:...7...
	0x90, 0x02, 0x00, 0x00, 0xb9, 0x4d, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x5f, 0x57, 0x00, 0x00, // .....M......_W..
	0x3b, 0x00, 0x04, 0x00, 0xe1, 0x06, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ;...............
	0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x64, 0x2d, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, // A.......d-......
	0x0e, 0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x64, 0x2d, 0x00, 0x00, 0x88, 0x05, 0x00, 0x00, // ....>...d-......
	0x41, 0x00, 0x05, 0x00, 0x90, 0x02, 0x00, 0x00, 0x0b, 0x38, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, // A........8......
	0x11, 0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x0b, 0x38, 0x00, 0x00, 0x1f, 0x07, 0x00, 0x00, // ....>....8......
	0x3d, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0x35, 0x62, 0x00, 0x00, 0x3a, 0x19, 0x00, 0x00, // =.......5b..:...
	0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x28, 0x3a, 0x00, 0x00, 0x35, 0x62, 0x00, 0x00, // Q.......(:..5b..
	0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x9b, 0x46, 0x00, 0x00, // ....Q........F..
	0x35, 0x62, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, // 5b......P.......
	0x84, 0x32, 0x00, 0x00, 0x28, 0x3a, 0x00, 0x00, 0x9b, 0x46, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, // .2..(:...F......
	0x8a, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0xe2, 0x02, 0x00, 0x00, 0x29, 0x2c, 0x00, 0x00, // ....A.......),..
	0x42, 0x13, 0x00, 0x00, 0x29, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, // B...)...=...e...
	0xf3, 0x3c, 0x00, 0x00, 0x29, 0x2c, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, // .<..),..........
	0x9f, 0x3b, 0x00, 0x00, 0x84, 0x32, 0x00, 0x00, 0xf3, 0x3c, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, // .;...2...<..A...
	0x9a, 0x02, 0x00, 0x00, 0x5f, 0x38, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, // ...._8..........
	0x3e, 0x00, 0x03, 0x00, 0x5f, 0x38, 0x00, 0x00, 0x9f, 0x3b, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // >..._8...;..=...
	0x1d, 0x00, 0x00, 0x00, 0x1d, 0x21, 0x00, 0x00, 0x4f, 0x2e, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, // .....!..O...A...
	0x9a, 0x02, 0x00, 0x00, 0x2d, 0x3c, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, // ....-<..........
	0x3e, 0x00, 0x03, 0x00, 0x2d, 0x3c, 0x00, 0x00, 0x1d, 0x21, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // >...-<...!..=...
	0x13, 0x00, 0x00, 0x00, 0x1e, 0x21, 0x00, 0x00, 0xb9, 0x4d, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, // .....!...M..A...
	0x90, 0x02, 0x00, 0x00, 0x2e, 0x3c, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x11, 0x0a, 0x00, 0x00, // .....<..........
	0x3e, 0x00, 0x03, 0x00, 0x2e, 0x3c, 0x00, 0x00, 0x1e, 0x21, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // >....<...!..=...
	0x64, 0x04, 0x00, 0x00, 0x47, 0x3a, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, // d...G:..........
	0x47, 0x3a, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                                           // G:..8....
};
static const uint8_t vs_solid_color_dx9[337] =
{
	0x56, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, // elViewProj......
	0x2c, 0x01, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x23, 0x00, 0x43, 0x54, 0x41, 0x42, // ,.........#.CTAB
	0x1c, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x01, 0x00, 0x00, 0x00, // ....W...........
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // ........P...0...
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........@.......
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, // u_modelViewProj.
	0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, // vs_3_0.Microsoft
	0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, //  (R) HLSL Shader
	0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, 0x32, 0x39, 0x2e, 0x39, //  Compiler 9.29.9
	0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, // 52.3111.........
	0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, // ................
	0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x02, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, // ................
	0x01, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x02, 0x00, 0x03, 0xe0, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x55, 0x90, // ..............U.
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, // ................
	0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, // ................
	0x03, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x90, // ................
	0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x03, 0xe0, 0x02, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, // ................
	0x00,                                                                                           // .
};
static const uint8_t vs_solid_color_dx11[582] =
{
	0x56, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, // elViewProj......
	0x18, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x06, 0x4f, 0xed, 0x0d, 0x92, 0xd2, 0x88, 0xff, // ....DXBC.O......
	0x10, 0x8f, 0x9a, 0x2d, 0x9a, 0x83, 0x53, 0x61, 0x01, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, // ...-..Sa........
	0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, // ....,...........
	0x49, 0x53, 0x47, 0x4e, 0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // ISGNh...........
	0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // P...............
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........V.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, // ................
	0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // _...............
	0x02, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x50, 0x4f, // ........COLOR.PO
	0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, // SITION.TEXCOORD.
	0x4f, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // OSGNl...........
	0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // P...............
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // b...............
	0x02, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, // ........SV_POSIT
	0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, // ION.COLOR.TEXCOO
	0x52, 0x44, 0x00, 0xab, 0x53, 0x48, 0x44, 0x52, 0x00, 0x01, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, // RD..SHDR....@...
	0x40, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // @...Y...F. .....
	0x04, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ...._...........
	0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, // _...2......._...
	0x32, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, // 2.......g.... ..
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, // ........e.... ..
	0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ....e...2 ......
	0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, // h.......8.......
	0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // ....V.......F. .
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, // ........2.......
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....F. .........
	0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........F.......
	0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, // ..... ......F...
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....F. .........
	0x36, 0x00, 0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, // 6.... ......F...
	0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x32, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ....6...2 ......
	0x46, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x03, 0x05, 0x00, // F.......>.......
	0x01, 0x00, 0x10, 0x00, 0x40, 0x00,                                                             // ....@.
};
static const uint8_t vs_solid_color_mtl[790] =
{
	0x56, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // elViewProj......
	0xf1, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, // ....using namesp
	0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // ace metal;.struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, // t xlatMtlShaderI
	0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // nput {.  float4 
	0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, // a_color0 [[attri
	0x62, 0x75, 0x74, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // bute(0)]];.  flo
	0x61, 0x74, 0x32, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, // at2 a_position [
	0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, // [attribute(1)]];
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, // .  float2 a_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, // oord0 [[attribut
	0x65, 0x28, 0x32, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // e(2)]];.};.struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, // t xlatMtlShaderO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // utput {.  float4
	0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, //  gl_Position [[p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // osition]];.  flo
	0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, // at4 v_color0;.  
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // float2 v_texcoor
	0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, // d0;.};.struct xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, // atMtlShaderUnifo
	0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, // rm {.  float4x4 
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, // u_modelViewProj;
	0x0a, 0x7d, 0x3b, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // .};.vertex xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, // tlShaderOutput x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, // latMtlMain (xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, // MtlShaderInput _
	0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, // mtl_i [[stage_in
	0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, // ]], constant xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, // tMtlShaderUnifor
	0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, // m& _mtl_u [[buff
	0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, // er(0)]]).{.  xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, // tMtlShaderOutput
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, //  _mtl_o;.  float
	0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, // 4 tmpvar_1 = 0;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, 0x20, //   tmpvar_1.zw = 
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, // float2(0.0, 1.0)
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x20, // ;.  tmpvar_1.xy 
	0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, // = _mtl_i.a_posit
	0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, // ion;.  _mtl_o.gl
	0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, // _Position = (_mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, // l_u.u_modelViewP
	0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, // roj * tmpvar_1);
	0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // .  _mtl_o.v_colo
	0x72, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x63, 0x6f, // r0 = _mtl_i.a_co
	0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x76, // lor0;.  _mtl_o.v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, // _texcoord0 = _mt
	0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, // l_i.a_texcoord0;
	0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, // .  return _mtl_o
	0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                             // ;.}...
};
extern const uint8_t* vs_solid_color_pssl;
extern const uint32_t vs_solid_color_pssl_size;

static const char* kWorker_js= "(\n\x66\x75\x6e\x63\x74\x69\x6f\x6e \x57\x6f\x72\x6b\x65\x72\x28\x29\x7b\x76\x61\x72 \x54\x68\x72\x65\x61\x64\x73\x3b\x54\x68\x72\x65\x61\x64\x73\x3d\x74\x68\x69\x73\x3b\x72\x65\x74\x75\x72\x6e\x28\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x29\x7b\x76\x61\x72 \x70\x72\x6f\x74\x6f\x74\x79\x70\x65\x3d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x2e\x70\x72\x6f\x74\x6f\x74\x79\x70\x65\x3b\x66\x75\x6e\x63\x74\x69\x6f\x6e \x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x28\x63\x6f\x64\x65\x29\x7b\x76\x61\x72 \x74\x2c\x74\x68\x69\x73\x24\x3d\x74\x68\x69\x73\x3b\x74\x68\x69\x73\x2e\x74\x68\x72\x65\x61\x64\x3d\x74\x3d\x54\x68\x72\x65\x61\x64\x73\x2e\x63\x72\x65\x61\x74\x65\x28\x29\x3b\x74\x2e\x6f\x6e\x28\x27\x6d\x65\x73\x73\x61\x67\x65\x27\x2c\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x61\x72\x67\x73\x29\x7b\x72\x65\x74\x75\x72\x6e \x74\x79\x70\x65\x6f\x66 \x74\x68\x69\x73\x24\x2e\x6f\x6e\x6d\x65\x73\x73\x61\x67\x65\x3d\x3d\x3d\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27\x3f\x74\x68\x69\x73\x24\x2e\x6f\x6e\x6d\x65\x73\x73\x61\x67\x65\x28\x7b\x64\x61\x74\x61\x3a\x61\x72\x67\x73\x7d\x29\x3a\x76\x6f\x69\x64 \x38\x3b\x7d\x29\x3b\x74\x2e\x6f\x6e\x28\x27\x65\x72\x72\x6f\x72\x27\x2c\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x61\x72\x67\x73\x29\x7b\x72\x65\x74\x75\x72\x6e \x74\x79\x70\x65\x6f\x66 \x74\x68\x69\x73\x24\x2e\x6f\x6e\x65\x72\x72\x6f\x72\x3d\x3d\x3d\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27\x3f\x74\x68\x69\x73\x24\x2e\x6f\x6e\x65\x72\x72\x6f\x72\x28\x61\x72\x67\x73\x29\x3a\x76\x6f\x69\x64 \x38\x3b\x7d\x29\x3b\x74\x2e\x6f\x6e\x28\x27\x63\x6c\x6f\x73\x65\x27\x2c\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x29\x7b\x72\x65\x74\x75\x72\x6e \x74\x2e\x64\x65\x73\x74\x72\x6f\x79\x28\x29\x3b\x7d\x29\x3b\x74\x68\x69\x73\x2e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x29\x7b\x72\x65\x74\x75\x72\x6e \x74\x2e\x64\x65\x73\x74\x72\x6f\x79\x28\x29\x3b\x7d\x3b\x74\x68\x69\x73\x2e\x61\x64\x64\x45\x76\x65\x6e\x74\x4c\x69\x73\x74\x65\x6e\x65\x72\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x65\x76\x65\x6e\x74\x2c\x63\x62\x29\x7b\x69\x66\x28\x65\x76\x65\x6e\x74\x3d\x3d\x3d\x27\x6d\x65\x73\x73\x61\x67\x65\x27\x29\x7b\x72\x65\x74\x75\x72\x6e \x74\x68\x69\x73\x24\x2e\x6f\x6e\x6d\x65\x73\x73\x61\x67\x65\x3d\x63\x62\x3b\x7d\x65\x6c\x73\x65\x7b\x72\x65\x74\x75\x72\x6e \x74\x2e\x6f\x6e\x28\x65\x76\x65\x6e\x74\x2c\x63\x62\x29\x3b\x7d\x7d\x3b\x74\x68\x69\x73\x2e\x64\x69\x73\x70\x61\x74\x63\x68\x45\x76\x65\x6e\x74\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x65\x76\x65\x6e\x74\x29\x7b\x72\x65\x74\x75\x72\x6e \x74\x2e\x65\x6d\x69\x74\x53\x65\x72\x69\x61\x6c\x69\x7a\x65\x64\x28\x65\x76\x65\x6e\x74\x2e\x74\x79\x70\x65\x2c\x65\x76\x65\x6e\x74\x29\x3b\x7d\x3b\x74\x68\x69\x73\x2e\x70\x6f\x73\x74\x4d\x65\x73\x73\x61\x67\x65\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x64\x61\x74\x61\x29\x7b\x72\x65\x74\x75\x72\x6e \x74\x2e\x65\x6d\x69\x74\x53\x65\x72\x69\x61\x6c\x69\x7a\x65\x64\x28\x27\x6d\x65\x73\x73\x61\x67\x65\x27\x2c\x7b\x64\x61\x74\x61\x3a\x64\x61\x74\x61\x7d\x29\x3b\x7d\x3b\x69\x66\x28\x74\x79\x70\x65\x6f\x66 \x63\x6f\x64\x65\x3d\x3d\x3d\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27\x29\x7b\x74\x2e\x65\x76\x61\x6c\x28\x22\x28\x22\x2b\x63\x6f\x64\x65\x2b\x22\x29\x28\x29\x22\x29\x3b\x7d\x65\x6c\x73\x65 \x69\x66\x28\x63\x6f\x64\x65\x21\x3d\x6e\x75\x6c\x6c\x29\x7b\x74\x2e\x6c\x6f\x61\x64\x28\x63\x6f\x64\x65\x29\x3b\x7d\x7d\n\x72\x65\x74\x75\x72\x6e \x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x3b\x7d\x28\x29\x29\x3b\x7d)";

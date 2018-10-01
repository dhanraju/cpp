proto_library(
	name = "addressbook_proto",
	srcs = ["addressbook.proto"],
	deps = ["@com_google_protobuf//:timestamp_proto"],
)

cc_proto_library(
	name = "addressbook_cc_proto",
	deps = [":addressbook_proto"],
)

cc_binary(
	name = "add_person_cpp",
	srcs = ["add_person.cc"],
	deps = [":addressbook_cc_proto"],
)

cc_binary(
	name = "list_people_cpp",
	srcs = ["list_people.cc"],
	deps = [":addressbook_cc_proto"],
)
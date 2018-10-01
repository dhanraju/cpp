Ref: https://developers.google.com/protocol-buffers/docs/overview

Protocol buffers are a flexible, efficient, automated mechanism for serializing data.
We define how we want our data to be structured once, then we can use special generated source code to easily write and read our structured data to and from a variety of data streams and using a variety of languages.

Define protocol buffer message types in .proto files.
Proto buf message is a small logical record of info, containing a series of name-value pairs.

Eg: Proto buf message containing information about a person.
message Person {
  required string name = 1;
  required int32 id = 2;
  optional string email = 3;

  enum PhoneType {
    MOBILE = 0;
    HOME = 1;
    WORK = 2;
  }

  message PhoneNumber {
    required string number = 1;
    optional PhoneType type = 2 [default = HOME];
  }

  repeated PhoneNumber phone = 4;
}

Each msg type has one or more uniquely numbered fields, and each field has a name and a value type, where value types can be numbers (int or float), booleans, strings, raw bytes or even other proto buf msg types.

We can specify optional fields, required fields and repeated fields.

We run the proto buf compiler for our app's language on our .proto file to generate data access classes. These provide simple accessors for each field (like name() and set_name()) as well as method to serialize/parse the whole structure to/from raw bytes.

By running the compiler on the above example, will generate a class called Person. We can then use this class in our app to populate, serialize, and retrieve Person proto buf msgs.


The code to WRITE our msg looks like this:

Person person;
person.set_name("Dhan Raju");
person.set_id(1234);
person.set_email("dh..ju@example.com");
fstream output("myfile", ios::out | ios::binary);
person.SerializeToOstream(&output);


The code to READ our msg looks like this:

fstream input("myfile", ios::in | ios::binary);
Person person;
person.ParseFromIstream(&input);
cout << "Name: " << person.name() << endl;
cout << "E-mail: " << person.email() << endl;

Examples:
https://github.com/protocolbuffers/protobuf/tree/master/examples

How to build and run:
$ bazel build :all
$ bazel-bin/add_person_cpp addressbook.data
addressbook.data: File not found. Creating a new file.
Enter person ID number: 001
Enter name: Dhan
Enter email address (blank for none): dh..ju@example.com
Enter a phone number (or leave blank to finish): 9......9
Is this a mobile, home, or work phone? work
Unknown phone type. Using default.
Enter a phone number (or leave blank to finish): 9898
Is this a mobile, home, or work phone? 2
Unknown phone type. Using default.
Enter a phone number (or leave blank to finish):

$ bazel-bin/list_people_cpp addressbook.data 
Person ID: 1
  Name: Dhan
  E-mail address: dh..ju@example.com
  Mobile phone #: 9......9
  Mobile phone #: 9898
  Updated: 2018-09-30T22:35:42Z

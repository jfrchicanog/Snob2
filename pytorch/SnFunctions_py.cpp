


pybind11::class_<SnFunction>(m,"SnFunction",
  "Function on Sn.")

  .def(pybind11::init<const int>())
  .def(pybind11::init<const int, const fill_raw&>())
  .def(pybind11::init<const int, const fill_zero&>())
  .def(pybind11::init<const int, const fill_ones&>())
  .def(pybind11::init<const int, const fill_gaussian&>())
  .def(pybind11::init<const int, const fill_sequential&>())

  .def_static("raw",static_cast<SnFunction (*)(const int, const int)>(&SnFunction::raw),
    py::arg("n"),py::arg("dev")=0)
  .def_static("zero",static_cast<SnFunction (*)(const int, const int)>(&SnFunction::zero),
    py::arg("n"),py::arg("dev")=0)
  .def_static("ones",static_cast<SnFunction (*)(const int, const int)>(&SnFunction::ones),
    py::arg("n"),py::arg("dev")=0)
  .def_static("gaussian",static_cast<SnFunction (*)(const int, const int)>(&SnFunction::gaussian),
    py::arg("n"),py::arg("dev")=0)
  .def_static("sequential",static_cast<SnFunction (*)(const int, const int)>(&SnFunction::sequential),
    py::arg("n"),py::arg("dev")=0)

  .def("__len__",&SnFunction::size,"Return the size of the function, i.e., the number of group elements.")

  .def("__getitem__",static_cast<float(SnFunction::*)(const int) const>(&SnFunction::get_value))
  .def("__getitem__",static_cast<float(SnFunction::*)(const SnElement&) const>(&SnFunction::get_value))

  .def("left_translate",&SnFunction::left_translate)
  .def("right_translate",&SnFunction::right_translate)
  .def("inv",&SnFunction::inv)
  .def("convolve",&SnFunction::convolve)

  .def("__str__",&SnFunction::str,py::arg("indent")="");



pybind11::class_<SnOverSmFunction>(m,"SnOverSmFunction",
  "Function on Sn/Sm.")

  .def(pybind11::init<const int, const int>())
  .def(pybind11::init<const int, const int, const fill_raw&>())
  .def(pybind11::init<const int, const int, const fill_zero&>())
  .def(pybind11::init<const int, const int, const fill_ones&>())
  .def(pybind11::init<const int, const int, const fill_gaussian&>())
  .def(pybind11::init<const int, const int, const fill_sequential&>())

  .def_static("raw",static_cast<SnOverSmFunction (*)(const int, const int, const int)>(&SnOverSmFunction::raw),
    py::arg("n"),py::arg("m"),py::arg("dev")=0)
  .def_static("zero",static_cast<SnOverSmFunction (*)(const int, const int, const int)>(&SnOverSmFunction::zero),
    py::arg("n"),py::arg("m"),py::arg("dev")=0)
  .def_static("ones",static_cast<SnOverSmFunction (*)(const int, const int, const int)>(&SnOverSmFunction::ones),
    py::arg("n"),py::arg("m"),py::arg("dev")=0)
  .def_static("gaussian",static_cast<SnOverSmFunction (*)(const int, const int, const int)>(&SnOverSmFunction::gaussian),
    py::arg("n"),py::arg("m"),py::arg("dev")=0)
  .def_static("sequential",static_cast<SnOverSmFunction (*)(const int, const int, const int)>(&SnOverSmFunction::sequential),
    py::arg("n"),py::arg("m"),py::arg("dev")=0)
  
  .def("__len__",&SnOverSmFunction::size,"Return the size of the function, i.e., the number of group elements.")
  
//.def("__getitem__",static_cast<float(SnOverSmFunction::*)(const int) const>(&SnOverSmFunction::get_value))
//.def("__getitem__",static_cast<float(SnOverSmFunction::*)(const SnElement&) const>(&SnOverSmFunction::get_value))

//  .def("left_translate",&SnOverSmFunction::left_translate)
//  .def("right_translate",&SnOverSmFunction::right_translate)
//  .def("inv",&SnOverSmFunction::inv)
//  .def("convolve",&SnOverSmFunction::convolve)

  .def("__str__",&SnOverSmFunction::str,py::arg("indent")="");



pybind11::class_<SnClassFunction>(m,"SnClassFunction",
  "Class function on Sn.")

  .def(pybind11::init<const int>())
  .def(pybind11::init<const int, const fill_raw&>())
  .def(pybind11::init<const int, const fill_zero&>())
  .def(pybind11::init<const int, const fill_ones&>())
  .def(pybind11::init<const int, const fill_gaussian&>())
  .def(pybind11::init<const int, const fill_sequential&>())

  .def_static("raw",static_cast<SnClassFunction (*)(const int, const int)>(&SnClassFunction::raw))
  .def_static("zero",static_cast<SnClassFunction (*)(const int, const int)>(&SnClassFunction::zero))
  .def_static("ones",static_cast<SnClassFunction (*)(const int, const int)>(&SnClassFunction::ones))
  .def_static("gaussian",static_cast<SnClassFunction (*)(const int, const int)>(&SnClassFunction::gaussian),
    py::arg("n"),py::arg("dev")=0)
  .def_static("sequential",static_cast<SnClassFunction (*)(const int, const int)>(&SnClassFunction::sequential))

  .def("__len__",&SnClassFunction::size,"Return the number of classes.")

  .def("__getitem__",static_cast<float(SnClassFunction::*)(const int) const>(&SnClassFunction::get_value))
  .def("__getitem__",static_cast<float(SnClassFunction::*)(const IntegerPartition&) const>(&SnClassFunction::get_value))
  .def("__getitem__",static_cast<float(SnClassFunction::*)(const SnCClass&) const>(&SnClassFunction::get_value))
    
  .def("__str__",&SnClassFunction::str,py::arg("indent")="");



pybind11::class_<SnPart>(m,"SnPart",
  "Isotypic part of an Sn vector.")

  .def(pybind11::init<const IntegerPartition&, const int>())
  .def(pybind11::init<const IntegerPartition&, const int, const fill_raw&>())
  .def(pybind11::init<const IntegerPartition&, const int, const fill_zero&>())
  .def(pybind11::init<const IntegerPartition&, const int, const fill_ones&>())
  .def(pybind11::init<const IntegerPartition&, const int, const fill_identity&>())
  .def(pybind11::init<const IntegerPartition&, const int, const fill_gaussian&>())

  .def_static("raw",static_cast<SnPart (*)(const IntegerPartition&, const int, const int)>(&SnPart::raw),
    py::arg("lambd"), py::arg("m"),py::arg("dev")=0)
  .def_static("zero",static_cast<SnPart (*)(const IntegerPartition&, const int, const int)>(&SnPart::zero),
    py::arg("lambd"), py::arg("m"),py::arg("dev")=0)
  .def_static("ones",static_cast<SnPart (*)(const IntegerPartition&, const int, const int)>(&SnPart::identity),
    py::arg("lambd"), py::arg("m"),py::arg("dev")=0)
  .def_static("gaussian",static_cast<SnPart (*)(const IntegerPartition&, const int, const int)>(&SnPart::gaussian),
    py::arg("lambd"), py::arg("m"),py::arg("dev")=0)

  .def("apply",static_cast<SnPart (*)(const SnElement&) const>(&SnPart::apply))
  .def("apply_inplace",static_cast<SnPart& (*)(const SnElement&)>(&SnPart::apply_inplace))

  .def("__str__",&SnPart::str,py::arg("indent")="");




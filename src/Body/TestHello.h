#ifndef TestHello_h
#define TestHello_h

#include <LuniLib.h>
#include <Device/ClientReporter.h>

#include <Frame/TestManager.h>
#include <Frame/DeviceDriverTest.h>
#include <Frame/Logger.h>

class TestHello : public DeviceDriverTest {
public:
  TestHello(const char *unitIdentifier);
  void doTest(TestManager *tst, ClientReporter *r, Logger *log);
};

#endif

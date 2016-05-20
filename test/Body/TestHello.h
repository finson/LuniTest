#ifndef TestHello_h
#define TestHello_h

#include <LuniLib.h>
#include <Device/ClientReporter.h>

#include <TestFrame/TestManager.h>
#include <TestFrame/DeviceDriverTest.h>
#include <TestFrame/Logger.h>

class TestHello : public DeviceDriverTest {
public:
  TestHello(const char *unitIdentifier);
  void doTest(TestManager *tst, ClientReporter *r, Logger *log);
};

#endif

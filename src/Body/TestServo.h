#ifndef TestServo_h
#define TestServo_h

#include <LuniLib.h>
#include <Device/ClientReporter.h>

#include <Frame/TestManager.h>
#include <Frame/DeviceDriverTest.h>
#include <Frame/Logger.h>

class TestServo : public DeviceDriverTest {
public:
  TestServo(const char *unitIdentifier);
  void doTest(TestManager *tst, ClientReporter *r, Logger *log);
};

#endif

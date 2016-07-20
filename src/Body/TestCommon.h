#ifndef TestCommon_h
#define TestCommon_h

#include <LuniLib.h>
#include <Device/ClientReporter.h>

#include <Frame/TestManager.h>
#include <Frame/DeviceDriverTest.h>
#include <Frame/Logger.h>

class TestCommon : public DeviceDriverTest {
public:
  TestCommon(const char *unitIdentifier);
  void doTest(TestManager *tst, ClientReporter *r, Logger *log);
};

#endif

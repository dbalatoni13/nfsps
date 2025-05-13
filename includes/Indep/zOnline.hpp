#pragma once

class DynamicAds {
  enum Platform { ADS_XENON = 0, ADS_PC = 1 };

public:
  void Create();
  void Destroy();
  class DynamicAds *Get();
  void Startup(enum DynamicAds::Platform, const char *);
  void Shutdown();
  bool IsRunning();
  void Tick();
  void EnterZone(const char *);
  DynamicAds(class DynamicAds &);

protected:
  DynamicAds();
  ~DynamicAds();

private:
  class DynamicAds *mInstance;

public:
  class DynamicAds &operator=(class DynamicAds &);
  void __local_vftable_ctor_closure();

protected:
  void *__vecDelDtor(unsigned int);
};

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WeatherService : NSObject <WeatherServicePrivateProtocol, WeatherServiceProtocol> {
    NSMapTable * _clientDictionary;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableArray * _clients;
    WFWeatherStoreService * _internalService;
    WFQueryDispatcher * _queryDispatcher;
    WFTemperatureUnitProvider * _temperatureUnitProvider;
}

@property (retain) NSMapTable *clientDictionary;
@property (nonatomic, readonly) NSArray *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) WFWeatherStoreService *internalService;
@property (retain) WFQueryDispatcher *queryDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFTemperatureUnitProvider *temperatureUnitProvider;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)addClient:(id)arg1 forPid:(int)arg2;
- (void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (id)clientDictionary;
- (id)clientForPid:(int)arg1;
- (id)clients;
- (void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1;
- (void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 taskIdentifier:(id)arg4;
- (void)forecastForLocation:(id)arg1 locale:(id)arg2 atDate:(id)arg3 options:(id)arg4 taskIdentifier:(id)arg5;
- (void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
- (id)init;
- (id)initWithStore:(id)arg1;
- (id)internalService;
- (void)invalidateCache:(id)arg1;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 taskIdentifier:(id)arg2;
- (void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2;
- (void)locationForString:(id)arg1 taskIdentifier:(id)arg2;
- (void)performMigrationWithCompletion:(id /* block */)arg1;
- (id)queryDispatcher;
- (void)queryDispatcherDidReceiveResponse:(id)arg1 identifier:(id)arg2;
- (void)reachabilityConfigurationForIdentifier:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2;
- (void)setClientDictionary:(id)arg1;
- (void)setInternalService:(id)arg1;
- (void)setQueryDispatcher:(id)arg1;
- (void)setTemperatureUnitProvider:(id)arg1;
- (id)temperatureUnitProvider;
- (void)temperatureUnitWithIdentifier:(id)arg1;

@end

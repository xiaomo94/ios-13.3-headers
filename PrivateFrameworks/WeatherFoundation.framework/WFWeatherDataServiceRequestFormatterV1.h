/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherDataServiceRequestFormatterV1 : NSObject <WFForecastRequestFormatter, WFForecastRequestFormatterMultiHost>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 rules:(id)arg5;
+ (id)geocodePathForLocation:(id)arg1 rules:(id)arg2;
+ (id)hostURLForEnvironment:(id)arg1;
+ (id)hostURLForService;

@end

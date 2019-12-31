/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFGetDirectionsAction : WFAction <WFDynamicEnumerationDataSource, WFParameterEventObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)directionsModeFromString:(id)arg1;
+ (id)localizedNameForDirectionsModeString:(id)arg1;

- (id)appIdentifier;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)getMapsURLForMapsLink:(id)arg1 appName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)initializeParameters;
- (void)openMapsLink:(id)arg1 inAppNamed:(id)arg2;
- (void)openMapsURL:(id)arg1 withAppIdentifier:(id)arg2;
- (void)parameterAttributesDidChange:(id)arg1;
- (id)possibleStatesForEnumeration:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)supportedDirectionsModesForAppName:(id)arg1;

@end

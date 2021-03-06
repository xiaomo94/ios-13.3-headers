/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (bool)ETAsFromHereWaypoint:(id)arg1 destinationWaypoints:(struct NSArray { Class x1; }*)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(id /* block */)arg5;
- (bool)composedWaypointForAddressString:(id)arg1 completion:(id /* block */)arg2;
- (bool)composedWaypointForLocation:(id)arg1 completion:(id /* block */)arg2;
- (bool)composedWaypointForMapItem:(id)arg1 completion:(id /* block */)arg2;
- (bool)forwardGeocodeAddressString:(id)arg1 completion:(id /* block */)arg2;
- (bool)forwardGeocodePostalAddress:(id)arg1 completion:(id /* block */)arg2;
- (bool)resolveMapItemHandleData:(struct NSData { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (bool)reverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (bool)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned int)arg4 completion:(id /* block */)arg5;
- (bool)searchString:(id)arg1 maxResults:(unsigned int)arg2 completion:(id /* block */)arg3;
- (struct NSString { Class x1; }*)uniqueName;

@end

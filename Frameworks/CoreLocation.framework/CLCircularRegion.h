/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLCircularRegion : CLRegion <HMFObject>

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } center;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) double radius;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (bool)supportsSecureCoding;

- (struct CLLocationCoordinate2D { double x1; double x2; })center;
- (bool)containsCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initNearbyAllowedWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (double)radius;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)circularRegionFromMapRegion:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)attributeDescriptions;
- (id)description;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct CLLocationCoordinate2D { double x_2_1_1; double x_2_1_2; } x2; struct CLLocationCoordinate2D { double x_3_1_1; double x_3_1_2; } x3; struct CLLocationCoordinate2D { double x_4_1_1; double x_4_1_2; } x4; })boundingBox;
- (double)latitude;
- (double)longitude;
- (id)searchPredicateWithLatitudeKey:(id)arg1 longitudeKey:(id)arg2;

@end

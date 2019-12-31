/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceCollection : NSObject {
    GEOMapItemAttribution * _attribution;
    GEOPDPlaceCollection * _collection;
    GEOPDAttribution * _dataAttribution;
}

@property (nonatomic, readonly) NSString *actionURLString;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long placeCount;
@property (nonatomic, readonly) NSData *storageData;

+ (id)placeCollectionForData:(id)arg1;

- (void).cxx_destruct;
- (id)actionURLString;
- (id)description;
- (id)imageURLforSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithCollection:(id)arg1 attribution:(id)arg2;
- (void)loadAttribution;
- (unsigned long long)muid;
- (id)name;
- (unsigned long long)placeCount;
- (id)storageData;

@end

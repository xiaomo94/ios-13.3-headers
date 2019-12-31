/* Generated by RuntimeBrowser.
 */

@protocol GEOTransitLine <NSObject>

@required

- (<GEOTransitArtworkDataSource> *)alternateArtwork;
- (<GEOTransitArtworkDataSource> *)artwork;
- (unsigned long long)departureTimeDisplayStyle;
- (bool)departuresAreVehicleSpecific;
- (bool)hasLineColorString;
- (GEOMapItemIdentifier *)identifier;
- (bool)isBus;
- (NSString *)lineColorString;
- (<GEOTransitArtworkDataSource> *)modeArtwork;
- (unsigned long long)muid;
- (NSString *)name;
- (NSArray *)operatingHours;
- (bool)showVehicleNumber;
- (<GEOTransitSystem> *)system;

@end

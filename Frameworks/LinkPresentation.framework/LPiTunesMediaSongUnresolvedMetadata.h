/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaSongUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {
    NSString * _album;
    NSString * _artist;
    LPiTunesMediaAsset * _artwork;
    NSString * _lyrics;
    NSString * _name;
    NSArray * _offers;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) LPiTunesMediaAsset *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lyrics;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *offers;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)artwork;
- (id)assetsToFetch;
- (id)lyrics;
- (id)name;
- (id)offers;
- (id)resolve;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setLyrics:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end

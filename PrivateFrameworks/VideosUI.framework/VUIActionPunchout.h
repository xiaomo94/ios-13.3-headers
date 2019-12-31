/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIActionPunchout : VUIAction {
    IKAppContext * _appContext;
    NSString * _canonicalID;
    WLKChannelDetails * _channelDetails;
    VUIContentMetadata * _contentMetadata;
    NSString * _contentTitle;
    NSString * _externalID;
    bool  _isEntitledToPlay;
    bool  _isPlaybackURL;
    NSURL * _punchoutURL;
    NSString * _referenceID;
}

@property (nonatomic, retain) IKAppContext *appContext;
@property (nonatomic, retain) NSString *canonicalID;
@property (nonatomic, retain) WLKChannelDetails *channelDetails;
@property (nonatomic, retain) VUIContentMetadata *contentMetadata;
@property (nonatomic, copy) NSString *contentTitle;
@property (nonatomic, retain) NSString *externalID;
@property (nonatomic) bool isEntitledToPlay;
@property (nonatomic) bool isPlaybackURL;
@property (nonatomic, retain) NSURL *punchoutURL;
@property (nonatomic, retain) NSString *referenceID;

- (void).cxx_destruct;
- (bool)_isValidAppInstalled;
- (void)_openAirplayPicker:(id /* block */)arg1;
- (void)_openPunchoutURL:(id /* block */)arg1;
- (void)_startAppInstallFlow:(id /* block */)arg1;
- (id)appContext;
- (id)canonicalID;
- (id)channelDetails;
- (id)contentMetadata;
- (id)contentTitle;
- (id)externalID;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (bool)isAccountRequired;
- (bool)isEntitledToPlay;
- (bool)isPlaybackURL;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)punchoutURL;
- (id)referenceID;
- (void)setAppContext:(id)arg1;
- (void)setCanonicalID:(id)arg1;
- (void)setChannelDetails:(id)arg1;
- (void)setContentMetadata:(id)arg1;
- (void)setContentTitle:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setIsEntitledToPlay:(bool)arg1;
- (void)setIsPlaybackURL:(bool)arg1;
- (void)setPunchoutURL:(id)arg1;
- (void)setReferenceID:(id)arg1;

@end

/* Generated by RuntimeBrowser.
 */

@protocol SFMediaRemoteControlCardSection <SFCardSection>

@required

- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSDictionary *)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (NSData *)jsonData;
- (NSString *)playbackBundleIdentifier;
- (NSString *)playbackRouteUniqueIdentifier;
- (bool)playbackRouteUniqueIdentifierIsEncrypted;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPlaybackBundleIdentifier:(NSString *)arg1;
- (void)setPlaybackRouteUniqueIdentifier:(NSString *)arg1;
- (void)setPlaybackRouteUniqueIdentifierIsEncrypted:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end

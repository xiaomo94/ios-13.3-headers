/* Generated by RuntimeBrowser.
 */

@protocol MessageItemViewModelBuilder <MessageItemFlagsViewModelBuilder>

@required

- (NSDate *)dateReceived;
- (bool)hasAttachments;
- (bool)isBlockedSender;
- (void)setBlockedSender:(bool)arg1;
- (void)setDateReceived:(NSDate *)arg1;
- (void)setHasAttachments:(bool)arg1;

@end

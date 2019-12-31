/* Generated by RuntimeBrowser.
 */

@protocol PIExportMetadataBuilder <NSObject>

@required

- (NSString *)caption;
- (NSDate *)creationDate;
- (NSTimeZone *)creationTimeZone;
- (NSArray *)keywords;
- (CLLocation *)location;
- (NSArray *)peopleNames;
- (void)setCaption:(NSString *)arg1;
- (void)setCreationDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2;
- (void)setKeywords:(NSArray *)arg1;
- (void)setLocation:(CLLocation *)arg1;
- (void)setPeopleNames:(NSArray *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end

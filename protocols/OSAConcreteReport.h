/* Generated by RuntimeBrowser.
 */

@protocol OSAConcreteReport <NSObject>

@required

- (NSArray *)appleCareDetails;
- (void)generateLogAtLevel:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (NSString *)problemType;
- (NSString *)reportNamePrefix;

@optional

- (NSDictionary *)additionalIPSMetadata;
- (bool)isActionable;

@end

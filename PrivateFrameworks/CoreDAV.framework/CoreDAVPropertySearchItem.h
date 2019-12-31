/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropertySearchItem : CoreDAVItem {
    NSString * _match;
    NSString * _matchTypeAttribute;
    CoreDAVLeafItem * _prop;
}

@property (nonatomic, retain) NSString *match;
@property (nonatomic, retain) NSString *matchTypeAttribute;
@property (nonatomic, retain) CoreDAVLeafItem *prop;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2;
- (id)match;
- (id)matchTypeAttribute;
- (id)prop;
- (void)setMatch:(id)arg1;
- (void)setMatchTypeAttribute:(id)arg1;
- (void)setProp:(id)arg1;
- (void)write:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (int)wellKnownPrincipalSearchType;

@end

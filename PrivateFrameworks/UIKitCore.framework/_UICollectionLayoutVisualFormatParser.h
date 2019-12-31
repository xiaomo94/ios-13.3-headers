/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutVisualFormatParser : NSObject {
    int  _axis;
    NSArray * _items;
    NSString * _name;
    NSString * _visualFormat;
}

@property (nonatomic) int axis;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *visualFormat;

+ (int)axisForVisualFormat:(id)arg1;
+ (id)parserWithVisualFormat:(id)arg1;
+ (id)parsersWithVisualFormats:(id)arg1 seperatedByDelimiter:(id)arg2;

- (void).cxx_destruct;
- (void)_parse;
- (int)axis;
- (id)description;
- (id)initWithVisualFormat:(id)arg1;
- (id)items;
- (id)name;
- (void)setAxis:(int)arg1;
- (void)setItems:(id)arg1;
- (void)setName:(id)arg1;
- (void)setVisualFormat:(id)arg1;
- (id)visualFormat;

@end
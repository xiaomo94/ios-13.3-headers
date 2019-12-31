/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCEnumerationMap : NSObject {
    bool  m_caseSensitive;
    struct __CFDictionary { } * m_stringToValue;
    struct __CFDictionary { } * m_valueToString;
}

- (void)dealloc;
- (void)enumerateValuesAndStringsUsingBlock:(id /* block */)arg1;
- (id)initWithStructs:(const struct TCEnumerationStruct { int x1; id x2; }*)arg1 count:(int)arg2;
- (id)initWithStructs:(const struct TCEnumerationStruct { int x1; id x2; }*)arg1 count:(int)arg2 caseSensitive:(bool)arg3;
- (id)stringForValue:(int)arg1;
- (long long)valueForString:(id)arg1;

@end

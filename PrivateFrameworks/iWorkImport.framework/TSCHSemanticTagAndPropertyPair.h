/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying> {
    int  mProperty;
    TSCHStyleSemanticTag * mSemanticTag;
}

+ (id)pairWithSemanticTag:(id)arg1 property:(int)arg2;
+ (id)semanticTagToSemanticUsagesMapForSemanticUsages:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSemanticTag:(id)arg1 property:(int)arg2;
- (bool)isEqual:(id)arg1;
- (int)property;
- (id)semanticTag;

@end

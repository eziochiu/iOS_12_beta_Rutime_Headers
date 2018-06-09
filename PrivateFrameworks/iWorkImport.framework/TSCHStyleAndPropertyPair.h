/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleAndPropertyPair : NSObject <NSCopying> {
    int  mProperty;
    TSSStyle * mStyle;
}

+ (id)pairWithStyle:(id)arg1 property:(int)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStyle:(id)arg1 property:(int)arg2;
- (bool)isEqual:(id)arg1;
- (int)property;
- (id)style;

@end

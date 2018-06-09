/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerPropertyKey : NSObject <NSCopying> {
    int  mProperty;
    TSCHStyleOwnerPath * mStyleOwnerPath;
}

@property (nonatomic, readonly) int property;
@property (nonatomic, readonly) TSCHStyleOwnerPath *styleOwnerPath;

+ (id)propertyKeyWithStyleOwnerPath:(id)arg1 property:(int)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithStyleOwnerPath:(id)arg1 property:(int)arg2;
- (bool)isEqual:(id)arg1;
- (int)property;
- (id)styleOwnerPath;

@end

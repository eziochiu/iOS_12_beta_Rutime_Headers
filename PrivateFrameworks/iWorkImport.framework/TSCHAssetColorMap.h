/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHAssetColorMap : NSObject {
    NSDictionary * mAssetPathToColorMap;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)colorForFilename:(id)arg1 fillSetIdentifier:(id)arg2;
- (id)colorForFilename:(id)arg1 imageSetIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end

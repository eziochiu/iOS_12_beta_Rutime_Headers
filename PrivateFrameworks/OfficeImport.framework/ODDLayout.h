/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDLayout : NSObject {
    ODDLayoutNode * mRootNode;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)rootNode;

@end

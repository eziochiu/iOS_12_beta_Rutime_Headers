/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewCellReuseParameters : NSObject {
    bool  _didEndDisplaying;
    NSIndexPath * _indexPath;
}

@property (nonatomic, readonly) bool didEndDisplaying;
@property (nonatomic, readonly) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (bool)didEndDisplaying;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1 didEndDisplaying:(bool)arg2;

@end

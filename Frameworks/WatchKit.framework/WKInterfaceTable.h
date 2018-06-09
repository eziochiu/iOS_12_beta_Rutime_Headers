/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceTable : WKInterfaceObject {
    WKInterfaceController * _controller;
    NSMutableArray * _rowControllerProperties;
    NSMutableArray * _rowControllers;
    NSDictionary * _rowDescriptions;
}

@property (nonatomic) WKInterfaceController *controller;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic, retain) NSMutableArray *rowControllerProperties;
@property (nonatomic, retain) NSMutableArray *rowControllers;
@property (nonatomic, copy) NSDictionary *rowDescriptions;

- (void).cxx_destruct;
- (void)_getRowControllers:(id)arg1 rowControllerProperties:(id)arg2 forRowTypes:(id)arg3;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (id)controller;
- (void)insertRowsAtIndexes:(id)arg1 withRowType:(id)arg2;
- (long long)numberOfRows;
- (void)performSegueForRow:(long long)arg1;
- (void)removeRowsAtIndexes:(id)arg1;
- (void)resequenceRowControllerPropertyIndexes;
- (id)rowControllerAtIndex:(long long)arg1;
- (id)rowControllerProperties;
- (id)rowControllers;
- (id)rowDescriptions;
- (void)scrollToRowAtIndex:(long long)arg1;
- (void)setController:(id)arg1;
- (void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2;
- (void)setRowControllerProperties:(id)arg1;
- (void)setRowControllers:(id)arg1;
- (void)setRowDescriptions:(id)arg1;
- (void)setRowTypes:(id)arg1;

@end

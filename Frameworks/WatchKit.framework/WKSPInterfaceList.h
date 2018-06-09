/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKSPInterfaceList : WKSPInterfaceObject {
    WKInterfaceController * _controller;
    NSArray * _rowControllerProperties;
    NSArray * _rowControllers;
    NSDictionary * _rowDescriptions;
}

@property (nonatomic) WKInterfaceController *controller;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic, retain) NSArray *rowControllerProperties;
@property (nonatomic, copy) NSArray *rowControllers;
@property (nonatomic, copy) NSDictionary *rowDescriptions;

- (void).cxx_destruct;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (id)controller;
- (long long)numberOfRows;
- (id)rowControllerAtIndex:(long long)arg1;
- (id)rowControllerProperties;
- (id)rowControllers;
- (id)rowDescriptions;
- (void)setController:(id)arg1;
- (void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2;
- (void)setRowControllerProperties:(id)arg1;
- (void)setRowControllers:(id)arg1;
- (void)setRowDescriptions:(id)arg1;
- (void)setRowTypes:(id)arg1;

@end

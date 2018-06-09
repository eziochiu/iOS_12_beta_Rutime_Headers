/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarPublisher : NSObject {
    struct __CFMachPort { } * _machPort;
    NSMutableSet * _statusBarItems;
    int  _styleOverrides;
}

- (void).cxx_destruct;
- (void)addStatusBarItem:(int)arg1;
- (int)addStyleOverrides:(int)arg1;
- (void)dealloc;
- (id)initWithCFMachPort:(struct __CFMachPort { }*)arg1;
- (unsigned int)publisherPort;
- (void)removeStatusBarItem:(int)arg1;
- (int)removeStyleOverrides:(int)arg1;
- (id)statusBarItems;
- (int)styleOverrides;

@end

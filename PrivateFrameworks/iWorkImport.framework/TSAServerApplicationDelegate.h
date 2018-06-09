/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAServerApplicationDelegate : NSObject {
    TSABaseApplicationDelegate * _baseApplicationDelegate;
}

@property (nonatomic, retain) TSABaseApplicationDelegate *baseApplicationDelegate;

+ (id)sharedDelegate;

- (id)baseApplicationDelegate;
- (void)dealloc;
- (id)init;
- (id)initWithBaseApplicationDelegate:(id)arg1;
- (void)setBaseApplicationDelegate:(id)arg1;

@end

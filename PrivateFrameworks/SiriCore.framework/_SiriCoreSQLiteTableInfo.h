/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface _SiriCoreSQLiteTableInfo : NSObject <SiriCoreSQLiteTable> {
    NSArray * _columns;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSArray *columns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)columns;
- (id)initWithName:(id)arg1 columns:(id)arg2;
- (id)name;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteQueryPlanRow : NSObject {
    NSString * _detail;
    long long  _from;
    long long  _order;
    long long  _selectID;
}

@property (nonatomic, readonly, copy) NSString *detail;
@property (nonatomic, readonly) long long from;
@property (nonatomic, readonly) long long order;
@property (nonatomic, readonly) long long selectID;

- (void).cxx_destruct;
- (id)description;
- (id)detail;
- (long long)from;
- (id)initWithSelectID:(long long)arg1 order:(long long)arg2 from:(long long)arg3 detail:(id)arg4;
- (long long)order;
- (long long)selectID;

@end

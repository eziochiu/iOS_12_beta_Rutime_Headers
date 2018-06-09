/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSPIRecentEvent : NSObject {
    NSDate * _date;
    NSString * _handle;
}

@property (retain) NSDate *date;
@property (retain) NSString *handle;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)handle;
- (id)initWithHandle:(id)arg1 date:(id)arg2;
- (void)setDate:(id)arg1;
- (void)setHandle:(id)arg1;

@end

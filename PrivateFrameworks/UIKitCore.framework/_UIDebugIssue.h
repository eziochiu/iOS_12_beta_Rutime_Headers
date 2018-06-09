/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDebugIssue : NSObject <_UIDebugIssueReporting> {
    NSString * _description;
    NSString * _prefix;
    _UIDebugIssueReport * _subissueReport;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *prefix;
@property (getter=_subissueReport, nonatomic, readonly) _UIDebugIssueReport *subissueReport;
@property (nonatomic, readonly, copy) NSArray *subissues;
@property (readonly) Class superclass;

+ (id)issueWithDescription:(id)arg1;
+ (id)issueWithFormat:(id)arg1;

- (void).cxx_destruct;
- (id)_subissueReport;
- (void)addIssue:(id)arg1;
- (id)description;
- (id)init;
- (id)prefix;
- (void)setDescription:(id)arg1;
- (void)setPrefix:(id)arg1;
- (id)subissues;

@end

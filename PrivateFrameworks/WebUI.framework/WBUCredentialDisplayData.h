/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUCredentialDisplayData : NSObject {
    NSDate * _creationDate;
    NSString * _detail;
    WBSCredentialMatch * _match;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSString *detail;
@property (nonatomic, readonly) WBSCredentialMatch *match;

+ (id)descriptionForPasswordWithUser:(id)arg1 creationDate:(id)arg2;

- (void).cxx_destruct;
- (id)creationDate;
- (id)detail;
- (id)initWithMatch:(id)arg1 detail:(id)arg2 creationDate:(id)arg3;
- (id)match;

@end

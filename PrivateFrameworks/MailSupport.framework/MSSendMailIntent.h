/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface MSSendMailIntent : INIntent

@property (nonatomic, copy) NSArray *sendMailBccAddresses;
@property (nonatomic, copy) NSString *sendMailBody;
@property (nonatomic, copy) NSArray *sendMailCcAddresses;
@property (nonatomic, copy) NSArray *sendMailSenderAddresses;
@property (nonatomic, copy) NSString *sendMailSubject;
@property (nonatomic, copy) NSArray *sendMailToAddresses;

@end
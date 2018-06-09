/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface _CNRegulatoryLogger : NSObject <CNRegulatoryLogger> {
    struct ct_green_tea_logger_s { } * _log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct ct_green_tea_logger_s { }*log;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (struct ct_green_tea_logger_s { }*)log;
- (void)modifyingContactsData;
- (void)readAndTransmittingContactsData;
- (void)readingContactsData;

@end

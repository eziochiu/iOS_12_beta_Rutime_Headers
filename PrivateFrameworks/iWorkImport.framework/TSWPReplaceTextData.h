/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPReplaceTextData : NSObject {
    NSArray * _attachments;
    NSString * _dictationAndAutocorrection;
    NSString * _language;
}

@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, readonly, copy) NSString *dictationAndAutocorrection;
@property (nonatomic, readonly, copy) NSString *language;

+ (id)replaceTextData;
+ (id)replaceTextDataWithAttachments:(id)arg1;
+ (id)replaceTextDataWithDictationAndAutocorrection:(id)arg1;
+ (id)replaceTextDataWithLanguage:(id)arg1;
+ (id)replaceTextDataWithLanguage:(id)arg1 dictationAndAutocorrection:(id)arg2;

- (void).cxx_destruct;
- (id)attachments;
- (id)dictationAndAutocorrection;
- (id)init;
- (id)initWithAttachments:(id)arg1;
- (id)initWithDictationAndAutocorrection:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (id)initWithLanguage:(id)arg1 dictationAndAutocorrection:(id)arg2;
- (id)language;
- (id)replaceTextDataByChangingDictationAndAutocorrection:(id)arg1;
- (id)replaceTextDataByChangingLanguage:(id)arg1;

@end

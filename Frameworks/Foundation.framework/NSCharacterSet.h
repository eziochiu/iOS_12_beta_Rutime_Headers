/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly, copy) NSData *bitmapRepresentation;
@property (readonly, copy) NSCharacterSet *invertedSet;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLFragmentAllowedCharacterSet;
+ (id)URLHostAllowedCharacterSet;
+ (id)URLPasswordAllowedCharacterSet;
+ (id)URLPathAllowedCharacterSet;
+ (id)URLQueryAllowedCharacterSet;
+ (id)URLUserAllowedCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)controlCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)illegalCharacterSet;
+ (void)initialize;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)newlineCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)punctuationCharacterSet;
+ (bool)supportsSecureCoding;
+ (id)symbolCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)whitespaceCharacterSet;

- (unsigned long long)_cfTypeID;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (id)_retainedBitmapRepresentation;
- (id)bitmapRepresentation;
- (bool)characterIsMember:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMemberInPlane:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)invertedSet;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isMutable;
- (bool)isSupersetOfSet:(id)arg1;
- (bool)longCharacterIsMember:(unsigned int)arg1;
- (void)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)equalCharacterSet;
+ (id)forwardSlashCharacterSet;
+ (id)percentCharacterSet;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)textAttachmentCharacterSet;

// Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation

+ (id)_emojiCharacterSet;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)invalidCharactersForFileTransferName;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_lockRelatedEmojiCharacterSet;
+ (id)safari_obscuredPasswordCharacterSets;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (id)emojiCharacterSet;
+ (id)passwordBulletCharacterSet;
+ (id)whitespaceNewlineAndSpecialCharacterSet;
+ (id)wordBreakCharacterSet;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)allQuotesCharacterSetExcludingLeft;
+ (id)allQuotesCharacterSetExcludingRight;
+ (id)breakingSpaceCharacterSet;
+ (id)invisibleCharacterSet;
+ (id)lineBreakingCharacterSet;
+ (id)normalQuotesCharacterSet;
+ (id)postSmartSet;
+ (id)preSmartSet;
+ (id)smartDoubleQuotesCharacterSet;
+ (id)smartQuotesCharacterSet;
+ (id)smartSingleQuotesCharacterSet;
+ (id)spaceCharacterSet;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)phoneNumberSeparatorCharacterSet;
+ (id)phoneNumberSeparatorCharacterSet;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

+ (id)pinyinInputCharacterSet;
+ (id)punctuationAndWhitespaceCharacterSet;
+ (id)sentenceDelimiterCharacterSet;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsce_characterSetRequiringSingleQuotes;
+ (id)tsce_dollarSignCharacterSet;
+ (id)tsce_internationalColonCharacterSet;
+ (id)tsce_internationalWhitespaceAndNewlineCharacterSet;
+ (id)tsce_internationalWhitespaceCharacterSet;
+ (id)tsce_listDelimiterCharacterSet;
+ (id)tsce_periodCharacterSet;
+ (id)tsce_singleQuoteCharacterSet;
+ (id)tswp_allQuotesCharacterSetExcludingLeft;
+ (id)tswp_allQuotesCharacterSetExcludingRight;
+ (id)tswp_breakingSpaceCharacterSet;
+ (id)tswp_characterSetWithCharactersInArray:(const unsigned short*)arg1 length:(unsigned long long)arg2;
+ (id)tswp_curlyQuotesCharacterSet;
+ (id)tswp_invisibleCharacterSet;
+ (id)tswp_lineBreakingCharacterSet;
+ (id)tswp_postSmartSet;
+ (id)tswp_preSmartSet;
+ (id)tswp_sentenceDelimiterCharacterSet;
+ (id)tswp_singleLeftQuoteCharacterSet;
+ (id)tswp_singleRightQuoteCharacterSet;
+ (id)tswp_smartSingleQuotesCharacterSet;
+ (id)tswp_spaceCharacterSet;
+ (id)tswp_variationSelectorCharacterSet;

@end

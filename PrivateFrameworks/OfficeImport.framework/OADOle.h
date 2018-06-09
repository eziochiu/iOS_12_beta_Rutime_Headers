/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADOle : NSObject {
    NSString * mAnsiClipboardFormatName;
    NSString * mAnsiProgID;
    NSString * mAnsiUserType;
    NSString * mCLSID;
    bool  mIconic;
    NSString * mMacClipboardFormat;
    id  mObject;
    NSString * mUnicodeClipboardFormatName;
    NSString * mUnicodeProgID;
    NSString * mUnicodeUserType;
    unsigned int  mWinClipboardFormat;
}

+ (bool)isCLSIDSupported:(id)arg1;
+ (bool)isProgIDChart:(id)arg1;
+ (bool)isProgIDMathType:(id)arg1;

- (id)CLSID;
- (id)ansiClipboardFormatName;
- (id)ansiProgID;
- (id)ansiUserType;
- (void)dealloc;
- (id)description;
- (bool)iconic;
- (id)init;
- (id)macClipboardFormat;
- (id)object;
- (void)setAnsiClipboardFormatName:(id)arg1;
- (void)setAnsiProgID:(id)arg1;
- (void)setAnsiUserType:(id)arg1;
- (void)setCLSID:(id)arg1;
- (void)setIconic:(bool)arg1;
- (void)setMacClipboardFormat:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setUnicodeClipboardFormatName:(id)arg1;
- (void)setUnicodeProgID:(id)arg1;
- (void)setUnicodeUserType:(id)arg1;
- (void)setWinClipboardFormat:(unsigned int)arg1;
- (id)unicodeClipboardFormatName;
- (id)unicodeProgID;
- (id)unicodeUserType;
- (unsigned int)winClipboardFormat;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSException : NSObject <NSCoding, NSCopying> {
    NSString * name;
    NSString * reason;
    id  reserved;
    NSDictionary * userInfo;
}

@property (readonly, copy) NSArray *callStackReturnAddresses;
@property (readonly, copy) NSArray *callStackSymbols;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *reason;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSString *xct_formattedDescription;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (void)raise:(id)arg1 format:(id)arg2;
+ (void)raise:(id)arg1 format:(id)arg2 arguments:(char *)arg3;

- (bool)_installStackTraceKeyIfNeeded;
- (id)callStackReturnAddresses;
- (id)callStackSymbols;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)raise;
- (id)reason;
- (id)userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

+ (bool)mdltsu_catchExceptionsInBlock:(id /* block */)arg1 error:(id*)arg2;
+ (void)mdltsu_raiseWithError:(id)arg1;

- (id)mdltsu_error;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)xct_formattedDescription;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (void)errnoRaise:(id)arg1 format:(id)arg2;

- (int)localErrno;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

- (id)nr_safeDescription;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;
+ (void)tsu_raiseWithError:(id)arg1;

- (id)gsu_descriptionWithStacktrace;
- (int)sfu_localErrno;
- (id)tsu_error;

// Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync

- (id)psy_safeDescription;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (void)errnoRaise:(id)arg1 format:(id)arg2;
+ (void)tsu_raiseWithError:(id)arg1;

- (int)localErrno;
- (id)tsu_error;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;
+ (bool)tsu_catchExceptionsInBlock:(id /* block */)arg1 error:(id*)arg2;
+ (void)tsu_raiseWithError:(id)arg1;

- (int)sfu_localErrno;
- (id)tsu_error;

@end

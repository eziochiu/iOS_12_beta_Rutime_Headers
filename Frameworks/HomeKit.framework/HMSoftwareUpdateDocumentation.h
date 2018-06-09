/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding> {
    HMHTMLDocument * _licenseAgreement;
    NSNumber * _licenseAgreementVersion;
    HMHTMLDocument * _releaseNotes;
    HMHTMLDocument * _releaseNotesSummary;
}

@property (readonly, copy) HMHTMLDocument *licenseAgreement;
@property (readonly, copy) NSNumber *licenseAgreementVersion;
@property (readonly, copy) HMHTMLDocument *releaseNotes;
@property (readonly, copy) HMHTMLDocument *releaseNotesSummary;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 licenseAgreement:(id)arg3 licenseAgreementVersion:(id)arg4;
- (id)licenseAgreement;
- (id)licenseAgreementVersion;
- (id)releaseNotes;
- (id)releaseNotesSummary;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)localizationsForBundle:(id)arg1;

- (id)initWithBundle:(id)arg1;

@end

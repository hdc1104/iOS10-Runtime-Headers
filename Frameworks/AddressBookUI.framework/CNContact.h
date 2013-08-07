/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString, CNContactIdentifier, CNContact, NSData, NSDateComponents;

@interface CNContact : NSObject <NSCopying, NSMutableCopying> {
    void *_record;
    void *_originalRecord;
    void *_source;
    void *_addressBook;
    NSArray *_linkedContacts;
    BOOL _unified;
    CNContactIdentifier *_identifier;
    unsigned int _recordType;
}

@property(readonly) CNContactIdentifier * identifier;
@property(readonly) NSString * namePrefix;
@property(readonly) NSString * givenName;
@property(readonly) NSString * middleName;
@property(readonly) NSString * familyName;
@property(readonly) NSString * nameSuffix;
@property(readonly) NSString * previousFamilyName;
@property(readonly) NSString * nickname;
@property(readonly) NSString * phoneticGivenName;
@property(readonly) NSString * phoneticMiddleName;
@property(readonly) NSString * phoneticFamilyName;
@property(readonly) NSString * organizationName;
@property(readonly) NSString * departmentName;
@property(readonly) NSString * jobTitle;
@property(readonly) NSDateComponents * birthday;
@property(readonly) NSString * note;
@property(readonly) int contactType;
@property(readonly) int nameOrder;
@property(readonly) NSArray * phoneNumbers;
@property(readonly) NSArray * emailAddresses;
@property(readonly) NSArray * urlAddresses;
@property(readonly) NSArray * dates;
@property(readonly) NSArray * instantMessageAddresses;
@property(readonly) NSArray * relatedNames;
@property(readonly) NSArray * socialProfiles;
@property(readonly) NSArray * postalAddresses;
@property(getter=isUnified,readonly) BOOL unified;
@property(readonly) NSString * personName;
@property(readonly) NSString * displayName;
@property(readonly) int recordID;
@property(readonly) void* record;
@property(readonly) NSString * fullName;
@property(readonly) NSString * phoneticFullName;
@property(readonly) NSString * primarySourceName;
@property(readonly) CNContact * preferredContactForName;
@property(readonly) CNContact * preferredContactForPhoto;
@property(getter=isPreferredForName,readonly) BOOL preferredForName;
@property(getter=isPreferredForPhoto,readonly) BOOL preferredForPhoto;
@property(readonly) NSArray * ringtone;
@property(readonly) NSArray * textTone;
@property(readonly) NSData * photoThumbnail;
@property(readonly) NSData * largestAvailablePhoto;
@property(getter=isReadonly,readonly) BOOL readonly;
@property(getter=isUnknown,readonly) BOOL unknown;
@property(getter=isFacebook,readonly) BOOL facebook;
@property(readonly) void* originalRecord;
@property(readonly) unsigned int recordType;
@property(readonly) void* source;
@property(readonly) void* addressBook;
@property(readonly) NSArray * linkedContacts;

+ (id)propertyForPropertyID:(int)arg1;
+ (id)propertiesFromPropertyIDs:(id)arg1;
+ (id)contactWithStateRestorationCoder:(id)arg1 addressBook:(void*)arg2;
+ (id)contactWithRecord:(void*)arg1 unify:(BOOL)arg2;
+ (int)defaultNameOrder;
+ (id)contactWithRecord:(void*)arg1;
+ (int)propertyIDForProperty:(id)arg1;
+ (id)contact;

- (id)birthday;
- (int)recordID;
- (id)textTone;
- (id)ringtone;
- (id)socialProfiles;
- (id)relatedNames;
- (id)instantMessageAddresses;
- (id)dates;
- (id)urlAddresses;
- (id)preferredContactForName;
- (int)nameOrder;
- (id)note;
- (id)phoneticFamilyName;
- (id)phoneticMiddleName;
- (id)phoneticGivenName;
- (id)previousFamilyName;
- (id)nameSuffix;
- (id)middleName;
- (id)namePrefix;
- (BOOL)hasLinkedContacts;
- (BOOL)isEqualToContact:(id)arg1;
- (id)_CNLabelFromABLabel:(struct __CFString { }*)arg1;
- (id)_labeledValueForSoundIdentifier:(int)arg1;
- (id)_labelledStringValuesForProperty:(int)arg1;
- (id)_labelledValuesForProperty:(int)arg1 valueFromABValue:(id)arg2;
- (id)_stringValueForProperty:(int)arg1;
- (BOOL)isEqualToContact:(id)arg1 includeIdentifiers:(BOOL)arg2;
- (id)initWithRecord:(void*)arg1 unify:(BOOL)arg2;
- (id)postalAddresses;
- (id)vCardRepresentation;
- (void)setPreferredForName:(BOOL)arg1;
- (void)setPreferredForPhoto:(BOOL)arg1;
- (BOOL)isPreferredForName;
- (BOOL)isPreferredForPhoto;
- (id)localizedNameForProperty:(id)arg1;
- (unsigned int)recordType;
- (BOOL)supportsCustomLabelsForProperty:(id)arg1;
- (id)primarySourceName;
- (id)givenName;
- (void)reloadRecord;
- (id)phoneNumbers;
- (id)largestAvailablePhoto;
- (id)preferredContactForPhoto;
- (BOOL)isUnified;
- (void)setPhoto:(id)arg1;
- (void)setImageData:(id)arg1 forFormat:(int)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)removePhoto;
- (id)largestAvailablePhotoAndCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (id)departmentName;
- (id)jobTitle;
- (id)nickname;
- (id)phoneticFullName;
- (id)organizationName;
- (int)contactType;
- (id)personName;
- (id)photoThumbnail;
- (BOOL)deleteContact;
- (void*)originalRecord;
- (BOOL)supportsInstantMessageService;
- (id)supportedLabelsForProperty:(id)arg1;
- (int)maximumNumberOfValuesForProperty:(id)arg1;
- (BOOL)isUnknown;
- (BOOL)isReadonly;
- (void)setLinkedContacts:(id)arg1;
- (id)linkedContacts;
- (BOOL)hasValidRecordID;
- (id)emailAddresses;
- (BOOL)isFacebook;
- (void*)source;
- (id)displayName;
- (id)fullName;
- (void*)record;
- (id)initWithRecord:(void*)arg1;
- (void*)addressBook;
- (void)setSource:(void*)arg1;
- (void)setAddressBook:(void*)arg1;
- (id)familyName;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)_squareImage:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_squareCropRectForSize:(struct CGSize { float x1; float x2; })arg1;

@end

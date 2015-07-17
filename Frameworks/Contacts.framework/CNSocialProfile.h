/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSocialProfile : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    NSString * _displayname;
    NSString * _service;
    NSString * _urlString;
    NSString * _userIdentifier;
    NSString * _username;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayname;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *urlString;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSString *username;

+ (id)localizedStringForKey:(id)arg1;
+ (id)localizedStringForService:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayname;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)service;
- (void)setDisplayname:(id)arg1;
- (void)setService:(id)arg1;
- (void)setUrlString:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)urlString;
- (id)userIdentifier;
- (id)username;

@end
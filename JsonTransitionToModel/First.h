//
//  First.h
//  22
//  Created by 22 on 2018/12/26.
//  Copyright © 2018年 22. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<YYModel/YYModel.h>)
#import <YYModel/YYModel.h>
#else
#import"YYModel.h" 
#endif

@class FirstData;
@class FirstDataQuestionGuides;
@class FirstDataQuestionGuidesQuestionPositions;

@interface First : NSObject

/** <#data#>*/
@property (nonatomic, strong) FirstData *data;

/** <#code#>*/
@property (nonatomic, copy) NSString *code;


+ (instancetype)modelWithJson:(id)json;

@end


@interface FirstData : NSObject

/** <#questionType#>*/
@property (nonatomic, copy) NSString *questionType;

/** <#currQuestionIdx#>*/
@property (nonatomic, copy) NSString *currQuestionIdx;

/** <#containerID#>*/
@property (nonatomic, copy) NSString *containerID;

/** <#currStatus#>*/
@property (nonatomic, copy) NSString *currStatus;

/** <#groupID#>*/
@property (nonatomic, copy) NSString *groupID;

/** <#questionGuides#>*/
@property (nonatomic, strong) NSArray<FirstDataQuestionGuides *> *questionGuides;

@end


@interface FirstDataQuestionGuides : NSObject

/** <#userQuestionID#>*/
@property (nonatomic, copy) NSString *userQuestionID;

/** <#currStatus#>*/
@property (nonatomic, copy) NSString *currStatus;

/** <#sysAnswer#>*/
@property (nonatomic, copy) NSString *sysAnswer;

/** <#symbol#>*/
@property (nonatomic, copy) NSString *symbol;

/** <#questionIdx#>*/
@property (nonatomic, copy) NSString *questionIdx;

/** <#wordEN#>*/
@property (nonatomic, copy) NSString *wordEN;

/** <#questionPositions#>*/
@property (nonatomic, copy) NSArray<NSString *> *questionPositions;

/** <#wordCN#>*/
@property (nonatomic, copy) NSString *wordCN;

/** <#userAnswer#>*/
@property (nonatomic, copy) NSString *userAnswer;

/** <#sysQuestionID#>*/
@property (nonatomic, copy) NSString *sysQuestionID;

/** <#score#>*/
@property (nonatomic, copy) NSString *score;

/** <#audioUrl#>*/
@property (nonatomic, copy) NSString *audioUrl;

@end


@interface FirstDataQuestionGuidesQuestionPositions : NSObject

@end


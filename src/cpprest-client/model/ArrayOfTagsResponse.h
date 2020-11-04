/**
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ArrayOfTagsResponse.h
 *
 * Response containing multiple tags.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ArrayOfTagsResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ArrayOfTagsResponse_H_


#include "../ModelBase.h"

#include "Tag.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Response containing multiple tags.
/// </summary>
class  ArrayOfTagsResponse
    : public ModelBase
{
public:
    ArrayOfTagsResponse();
    virtual ~ArrayOfTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ArrayOfTagsResponse members

    /// <summary>
    /// A list of Tag objects.
    /// </summary>
    std::vector<std::shared_ptr<Tag>>& getData();
    bool dataIsSet() const;
    void unsetData();

    void setData(const std::vector<std::shared_ptr<Tag>>& value);


protected:
    std::vector<std::shared_ptr<Tag>> m_Data;
    bool m_DataIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ArrayOfTagsResponse_H_ */